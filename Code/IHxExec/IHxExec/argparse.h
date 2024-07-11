#pragma once
#include <iostream>
#include <algorithm>

wchar_t* getCmdOption(wchar_t** begin, wchar_t** end, const std::wstring& option);
bool cmdOptionExists(wchar_t** begin, wchar_t** end, const std::wstring& option);