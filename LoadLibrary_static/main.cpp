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

#include "../library03/library03.h"

#ifdef _DEBUG
#pragma comment(lib, "../debug/library03.lib")
#else
#pragma comment(lib, "../release/library03.lib")
#endif

int main(int argc, char* argv[])
{
	//! ��̬���ؿ��ļ�
	printf("[1] static loading the library!\n");
	int result;
	result = add3(10,20);
	printf("static loading the library03, result=%d\n", result);
	getchar();

	return 0;
}
