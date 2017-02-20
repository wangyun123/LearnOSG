/*
*	ѧϰwindows�¶�̬���̼���
*	�ο���
*	��̬���ӿ�����ֵ��÷�ʽ�� ��̬���غͶ�̬����
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
	HMODULE hModule = LoadLibrary(_T("library03.dll"));
	if (hModule == nullptr)
	{
		printf("can't load library03.dll !\n");
		return 0;
	}
	typedef int (*Func)(int a, int b);
	Func add = (Func)GetProcAddress(hModule, "add3");
	if (add == nullptr)
	{
		printf("can't load func add3 !\n");
		return 0;
	}

	int result;
	result = add(10,20);
	printf("dynamic loading the library03, result=%d\n", result);
	getchar();

	FreeLibrary(hModule);

	return 0;
}