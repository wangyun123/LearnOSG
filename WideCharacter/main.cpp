/*
*	ѧϰ���ַ�
*	�ο��� 
*	
*	���С��ַ����룺
*	GB2312:		0XD6 0XD0
*	UNICODE:	0X4E 0X2D
*
*	ע�⣺
*	��1��;
*
*		
*
*	��2��;
*
*		
*
*	2017-03-31
*/

#include <stdio.h>
#include <locale.h>

void func(_In_ int a)
{

}
int main(int argc, char* argv[])
{
// 	setlocale(LC_ALL,"");
// 	char y = "��";
	char x[] = "��";
	char x1[] = {0xd6, 0xd0, 0};
	//wchar_t x2 = "��";
	wchar_t x3[] = L"��";
// 	TCHAR tc;

	printf("%s\n", x);
	printf("%s\n", x1);
	printf("%s\n", x3);
	getchar();

	return 0;
}