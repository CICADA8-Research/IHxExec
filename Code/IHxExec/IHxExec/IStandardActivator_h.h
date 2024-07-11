

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Tue Jan 19 08:14:07 2038
 */
/* Compiler settings for IStandardActivator.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0626 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __IStandardActivator_h_h__
#define __IStandardActivator_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if _CONTROL_FLOW_GUARD_XFG
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IStandardActivator_FWD_DEFINED__
#define __IStandardActivator_FWD_DEFINED__
typedef interface IStandardActivator IStandardActivator;

#endif 	/* __IStandardActivator_FWD_DEFINED__ */


#ifndef __ISpecialSystemProperties_FWD_DEFINED__
#define __ISpecialSystemProperties_FWD_DEFINED__
typedef interface ISpecialSystemProperties ISpecialSystemProperties;

#endif 	/* __ISpecialSystemProperties_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IStandardActivator_INTERFACE_DEFINED__
#define __IStandardActivator_INTERFACE_DEFINED__

/* interface IStandardActivator */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_IStandardActivator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000001b8-0000-0000-C000-000000000046")
    IStandardActivator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StandardGetClassObject( 
            /* [in] */ REFCLSID rclsid,
            /* [in] */ DWORD dwClsCtx,
            /* [in] */ COSERVERINFO *pServerInfo,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StandardCreateInstance( 
            /* [in] */ REFCLSID Clsid,
            /* [in] */ IUnknown *punkOuter,
            /* [in] */ DWORD dwClsCtx,
            /* [in] */ COSERVERINFO *pServerInfo,
            /* [in] */ DWORD dwCount,
            /* [size_is][in] */ MULTI_QI *pResults) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StandardGetInstanceFromFile( 
            /* [in] */ COSERVERINFO *pServerInfo,
            /* [in] */ CLSID *pclsidOverride,
            /* [in] */ IUnknown *punkOuter,
            /* [in] */ DWORD dwClsCtx,
            /* [in] */ DWORD grfMode,
            /* [in] */ OLECHAR *pwszName,
            /* [in] */ DWORD dwCount,
            /* [size_is][in] */ MULTI_QI *pResults) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StandardGetInstanceFromIStorage( 
            /* [in] */ COSERVERINFO *pServerInfo,
            /* [in] */ CLSID *pclsidOverride,
            /* [in] */ IUnknown *punkOuter,
            /* [in] */ DWORD dwClsCtx,
            /* [in] */ IStorage *pstg,
            /* [in] */ DWORD dwCount,
            /* [size_is][in] */ MULTI_QI *pResults) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IStandardActivatorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStandardActivator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStandardActivator * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStandardActivator * This);
        
        DECLSPEC_XFGVIRT(IStandardActivator, StandardGetClassObject)
        HRESULT ( STDMETHODCALLTYPE *StandardGetClassObject )( 
            IStandardActivator * This,
            /* [in] */ REFCLSID rclsid,
            /* [in] */ DWORD dwClsCtx,
            /* [in] */ COSERVERINFO *pServerInfo,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppv);
        
        DECLSPEC_XFGVIRT(IStandardActivator, StandardCreateInstance)
        HRESULT ( STDMETHODCALLTYPE *StandardCreateInstance )( 
            IStandardActivator * This,
            /* [in] */ REFCLSID Clsid,
            /* [in] */ IUnknown *punkOuter,
            /* [in] */ DWORD dwClsCtx,
            /* [in] */ COSERVERINFO *pServerInfo,
            /* [in] */ DWORD dwCount,
            /* [size_is][in] */ MULTI_QI *pResults);
        
        DECLSPEC_XFGVIRT(IStandardActivator, StandardGetInstanceFromFile)
        HRESULT ( STDMETHODCALLTYPE *StandardGetInstanceFromFile )( 
            IStandardActivator * This,
            /* [in] */ COSERVERINFO *pServerInfo,
            /* [in] */ CLSID *pclsidOverride,
            /* [in] */ IUnknown *punkOuter,
            /* [in] */ DWORD dwClsCtx,
            /* [in] */ DWORD grfMode,
            /* [in] */ OLECHAR *pwszName,
            /* [in] */ DWORD dwCount,
            /* [size_is][in] */ MULTI_QI *pResults);
        
        DECLSPEC_XFGVIRT(IStandardActivator, StandardGetInstanceFromIStorage)
        HRESULT ( STDMETHODCALLTYPE *StandardGetInstanceFromIStorage )( 
            IStandardActivator * This,
            /* [in] */ COSERVERINFO *pServerInfo,
            /* [in] */ CLSID *pclsidOverride,
            /* [in] */ IUnknown *punkOuter,
            /* [in] */ DWORD dwClsCtx,
            /* [in] */ IStorage *pstg,
            /* [in] */ DWORD dwCount,
            /* [size_is][in] */ MULTI_QI *pResults);
        
        DECLSPEC_XFGVIRT(IStandardActivator, Reset)
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IStandardActivator * This);
        
        END_INTERFACE
    } IStandardActivatorVtbl;

    interface IStandardActivator
    {
        CONST_VTBL struct IStandardActivatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStandardActivator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStandardActivator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStandardActivator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStandardActivator_StandardGetClassObject(This,rclsid,dwClsCtx,pServerInfo,riid,ppv)	\
    ( (This)->lpVtbl -> StandardGetClassObject(This,rclsid,dwClsCtx,pServerInfo,riid,ppv) ) 

#define IStandardActivator_StandardCreateInstance(This,Clsid,punkOuter,dwClsCtx,pServerInfo,dwCount,pResults)	\
    ( (This)->lpVtbl -> StandardCreateInstance(This,Clsid,punkOuter,dwClsCtx,pServerInfo,dwCount,pResults) ) 

#define IStandardActivator_StandardGetInstanceFromFile(This,pServerInfo,pclsidOverride,punkOuter,dwClsCtx,grfMode,pwszName,dwCount,pResults)	\
    ( (This)->lpVtbl -> StandardGetInstanceFromFile(This,pServerInfo,pclsidOverride,punkOuter,dwClsCtx,grfMode,pwszName,dwCount,pResults) ) 

#define IStandardActivator_StandardGetInstanceFromIStorage(This,pServerInfo,pclsidOverride,punkOuter,dwClsCtx,pstg,dwCount,pResults)	\
    ( (This)->lpVtbl -> StandardGetInstanceFromIStorage(This,pServerInfo,pclsidOverride,punkOuter,dwClsCtx,pstg,dwCount,pResults) ) 

#define IStandardActivator_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStandardActivator_INTERFACE_DEFINED__ */


#ifndef __ISpecialSystemProperties_INTERFACE_DEFINED__
#define __ISpecialSystemProperties_INTERFACE_DEFINED__

/* interface ISpecialSystemProperties */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_ISpecialSystemProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000001b9-0000-0000-C000-000000000046")
    ISpecialSystemProperties : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetSessionId( 
            /* [in] */ ULONG dwSessionId,
            /* [in] */ BOOL bUseConsole,
            /* [in] */ BOOL fRemoteThisSessionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSessionId( 
            /* [out] */ ULONG *pdwSessionId,
            /* [out] */ BOOL *pbUseConsole) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSessionId2( 
            /* [out] */ ULONG *pdwSessionId,
            /* [out] */ BOOL *pbUseConsole,
            /* [out] */ BOOL *pfRemoteThisSessionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClientImpersonating( 
            /* [in] */ BOOL fClientImpersonating) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClientImpersonating( 
            /* [out] */ BOOL *pfClientImpersonating) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPartitionId( 
            /* [in] */ REFGUID guidPartiton) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPartitionId( 
            /* [out] */ GUID *pguidPartiton) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProcessRequestType( 
            /* [in] */ DWORD dwPRT) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProcessRequestType( 
            /* [out] */ DWORD *pdwPRT) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOrigClsctx( 
            /* [in] */ DWORD dwClsctx) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOrigClsctx( 
            /* [out] */ DWORD *dwClsctx) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultAuthenticationLevel( 
            /* [out] */ DWORD *pdwAuthnLevel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDefaultAuthenticationLevel( 
            /* [in] */ DWORD dwAuthnLevel) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpecialSystemPropertiesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpecialSystemProperties * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpecialSystemProperties * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpecialSystemProperties * This);
        
        DECLSPEC_XFGVIRT(ISpecialSystemProperties, SetSessionId)
        HRESULT ( STDMETHODCALLTYPE *SetSessionId )( 
            ISpecialSystemProperties * This,
            /* [in] */ ULONG dwSessionId,
            /* [in] */ BOOL bUseConsole,
            /* [in] */ BOOL fRemoteThisSessionId);
        
        DECLSPEC_XFGVIRT(ISpecialSystemProperties, GetSessionId)
        HRESULT ( STDMETHODCALLTYPE *GetSessionId )( 
            ISpecialSystemProperties * This,
            /* [out] */ ULONG *pdwSessionId,
            /* [out] */ BOOL *pbUseConsole);
        
        DECLSPEC_XFGVIRT(ISpecialSystemProperties, GetSessionId2)
        HRESULT ( STDMETHODCALLTYPE *GetSessionId2 )( 
            ISpecialSystemProperties * This,
            /* [out] */ ULONG *pdwSessionId,
            /* [out] */ BOOL *pbUseConsole,
            /* [out] */ BOOL *pfRemoteThisSessionId);
        
        DECLSPEC_XFGVIRT(ISpecialSystemProperties, SetClientImpersonating)
        HRESULT ( STDMETHODCALLTYPE *SetClientImpersonating )( 
            ISpecialSystemProperties * This,
            /* [in] */ BOOL fClientImpersonating);
        
        DECLSPEC_XFGVIRT(ISpecialSystemProperties, GetClientImpersonating)
        HRESULT ( STDMETHODCALLTYPE *GetClientImpersonating )( 
            ISpecialSystemProperties * This,
            /* [out] */ BOOL *pfClientImpersonating);
        
        DECLSPEC_XFGVIRT(ISpecialSystemProperties, SetPartitionId)
        HRESULT ( STDMETHODCALLTYPE *SetPartitionId )( 
            ISpecialSystemProperties * This,
            /* [in] */ REFGUID guidPartiton);
        
        DECLSPEC_XFGVIRT(ISpecialSystemProperties, GetPartitionId)
        HRESULT ( STDMETHODCALLTYPE *GetPartitionId )( 
            ISpecialSystemProperties * This,
            /* [out] */ GUID *pguidPartiton);
        
        DECLSPEC_XFGVIRT(ISpecialSystemProperties, SetProcessRequestType)
        HRESULT ( STDMETHODCALLTYPE *SetProcessRequestType )( 
            ISpecialSystemProperties * This,
            /* [in] */ DWORD dwPRT);
        
        DECLSPEC_XFGVIRT(ISpecialSystemProperties, GetProcessRequestType)
        HRESULT ( STDMETHODCALLTYPE *GetProcessRequestType )( 
            ISpecialSystemProperties * This,
            /* [out] */ DWORD *pdwPRT);
        
        DECLSPEC_XFGVIRT(ISpecialSystemProperties, SetOrigClsctx)
        HRESULT ( STDMETHODCALLTYPE *SetOrigClsctx )( 
            ISpecialSystemProperties * This,
            /* [in] */ DWORD dwClsctx);
        
        DECLSPEC_XFGVIRT(ISpecialSystemProperties, GetOrigClsctx)
        HRESULT ( STDMETHODCALLTYPE *GetOrigClsctx )( 
            ISpecialSystemProperties * This,
            /* [out] */ DWORD *dwClsctx);
        
        DECLSPEC_XFGVIRT(ISpecialSystemProperties, GetDefaultAuthenticationLevel)
        HRESULT ( STDMETHODCALLTYPE *GetDefaultAuthenticationLevel )( 
            ISpecialSystemProperties * This,
            /* [out] */ DWORD *pdwAuthnLevel);
        
        DECLSPEC_XFGVIRT(ISpecialSystemProperties, SetDefaultAuthenticationLevel)
        HRESULT ( STDMETHODCALLTYPE *SetDefaultAuthenticationLevel )( 
            ISpecialSystemProperties * This,
            /* [in] */ DWORD dwAuthnLevel);
        
        END_INTERFACE
    } ISpecialSystemPropertiesVtbl;

    interface ISpecialSystemProperties
    {
        CONST_VTBL struct ISpecialSystemPropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpecialSystemProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpecialSystemProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpecialSystemProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpecialSystemProperties_SetSessionId(This,dwSessionId,bUseConsole,fRemoteThisSessionId)	\
    ( (This)->lpVtbl -> SetSessionId(This,dwSessionId,bUseConsole,fRemoteThisSessionId) ) 

#define ISpecialSystemProperties_GetSessionId(This,pdwSessionId,pbUseConsole)	\
    ( (This)->lpVtbl -> GetSessionId(This,pdwSessionId,pbUseConsole) ) 

#define ISpecialSystemProperties_GetSessionId2(This,pdwSessionId,pbUseConsole,pfRemoteThisSessionId)	\
    ( (This)->lpVtbl -> GetSessionId2(This,pdwSessionId,pbUseConsole,pfRemoteThisSessionId) ) 

#define ISpecialSystemProperties_SetClientImpersonating(This,fClientImpersonating)	\
    ( (This)->lpVtbl -> SetClientImpersonating(This,fClientImpersonating) ) 

#define ISpecialSystemProperties_GetClientImpersonating(This,pfClientImpersonating)	\
    ( (This)->lpVtbl -> GetClientImpersonating(This,pfClientImpersonating) ) 

#define ISpecialSystemProperties_SetPartitionId(This,guidPartiton)	\
    ( (This)->lpVtbl -> SetPartitionId(This,guidPartiton) ) 

#define ISpecialSystemProperties_GetPartitionId(This,pguidPartiton)	\
    ( (This)->lpVtbl -> GetPartitionId(This,pguidPartiton) ) 

#define ISpecialSystemProperties_SetProcessRequestType(This,dwPRT)	\
    ( (This)->lpVtbl -> SetProcessRequestType(This,dwPRT) ) 

#define ISpecialSystemProperties_GetProcessRequestType(This,pdwPRT)	\
    ( (This)->lpVtbl -> GetProcessRequestType(This,pdwPRT) ) 

#define ISpecialSystemProperties_SetOrigClsctx(This,dwClsctx)	\
    ( (This)->lpVtbl -> SetOrigClsctx(This,dwClsctx) ) 

#define ISpecialSystemProperties_GetOrigClsctx(This,dwClsctx)	\
    ( (This)->lpVtbl -> GetOrigClsctx(This,dwClsctx) ) 

#define ISpecialSystemProperties_GetDefaultAuthenticationLevel(This,pdwAuthnLevel)	\
    ( (This)->lpVtbl -> GetDefaultAuthenticationLevel(This,pdwAuthnLevel) ) 

#define ISpecialSystemProperties_SetDefaultAuthenticationLevel(This,dwAuthnLevel)	\
    ( (This)->lpVtbl -> SetDefaultAuthenticationLevel(This,dwAuthnLevel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpecialSystemProperties_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


