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

#include "../library03/library03.h"
#pragma comment(lib, "../release/library03.lib")

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