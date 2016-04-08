#pragma once

#ifdef XPF_EXPORTS
#define XPF_API __declspec(dllexport)
#else
#define XPF_API __declspec(dllimport)
#endif

class XPF_API xpf
{
public:
	int getVersion();

};