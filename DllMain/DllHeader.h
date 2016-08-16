#pragma once

#if !defined LIBSPY_DLL_H
#define LIBSPY_DLL_H


#ifdef DLLMAIN_EXPORTS /*Define the Macro aka ( DLLMAIN_EXPORTS) , in this project's properties settings  (this dll header
 + responding cpp source file ) ,Properties -> Configuration -> Active(Debug) -> C\C++ -> Preprocessor -> Proprocessor definitions
*/
#define LIBSPY_API __declspec(dllexport)
#else
#define LIBSPY_API __declspec(dllimport)
#endif

extern LIBSPY_API HWND	g_hPwdEdit;
extern LIBSPY_API char	g_szPassword[128];

#endif
