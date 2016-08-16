

#include <windows.h>
#include <stdio.h>     // printf

#include "..\DllMain\DllHeader.h"



int main()
{
	LoadLibraryA("..\\Debug\\DllMain.dll");

	g_szPassword[4] = 'e';
	g_szPassword[2] =  'u' ;


	//try to output  the data created and modified in the dll file  ,the ouput should be k
	printf("%c", g_szPassword[100]);

	//modify the data in the shared area  ,the ouput should be c 

	g_szPassword[100] = 'c';
	printf("%c", g_szPassword[100]);

}


