

#include <windows.h>
#include "DllHeader.h"

#pragma data_seg (".shared")
HWND	g_hPwdEdit = 0;
char	g_szPassword[128] = { '/0' };

#pragma data_seg ()

#pragma comment(linker,"/SECTION:.shared,RWS") 

BOOL APIENTRY DllMain(HANDLE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	//Modify a member of char array in the shared area
	g_szPassword[100] = 'k';
	return TRUE;
}