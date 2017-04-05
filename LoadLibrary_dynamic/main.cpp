/*
*	ѧϰwindows�¶�̬���̼���
*	�ο���
*	��̬���ӿ�����ֵ��÷�ʽ�� ��̬���غͶ�̬����
*	
*			����	1��װ��ʱ��̬���ӣ�load-time dynamic linking
*				2������ʱ��̬���ӣ�run-time dynamic linking
*
*	1������LoadLibrary_static: ��̬����/��̬����
*	   1) ����#pragma comment(lib, "**.lib")�ķ�ʽ
*	   2) ���ù��������� ���������� -> �����롱����**.lib
*	
*	2������LoadLibrary_dynamic: ��̬����/��̬����
*	   ����LoadLibrary()��ʽ��̬���ؿ��ļ�
*
*/

#include <stdio.h>
#include <Windows.h>
#include <tchar.h>

int main(int argc, char* argv[])
{
	//! ��̬���ؿ��ļ�
	printf("[2] dynamic loading the library!\n");
	HMODULE hModule = LoadLibrary(_T("library04.dll"));
	if (hModule == nullptr)
	{
		printf("can't load library04.dll !\n");
		return 0;
	}
	typedef int (*Func)(int a, int b);
	Func add = (Func)GetProcAddress(hModule, "add4");
	if (add == nullptr)
	{
		printf("can't load func add !\n");
		return 0;
	}

	int result;
	result = add(10,20);
	printf("dynamic loading the library04, result=%d\n", result);
	getchar();

	FreeLibrary(hModule);

	return 0;
}
