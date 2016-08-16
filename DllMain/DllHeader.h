#pragma once

#if !defined LIBSPY_DLL_H
#define LIBSPY_DLL_H


#ifdef DLLMAIN_EXPORTS
#define LIBSPY_API __declspec(dllexport)
#else
#define LIBSPY_API __declspec(dllimport)
#endif

extern LIBSPY_API HWND	g_hPwdEdit;
extern LIBSPY_API char	g_szPassword[128];

#endif