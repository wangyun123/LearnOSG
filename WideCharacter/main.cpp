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
#include <Windows.h>

void func(_In_ int a)
{

}
int main(int argc, char* argv[])
{
#if 1
	TCHAR* tc=L"a��";
	WCHAR* wc=L"a��";
	printf("TCHAR:%d\n", lstrlen(tc));
	printf("TCHAR:%d\n", lstrlen(wc));
// 	setlocale(LC_ALL,"");
// 	char y = "��";
// 	char x[] = "��";
// 	char x1[] = {0xd6, 0xd0, 0};
// 	//wchar_t x2 = "��";
// 	wchar_t x3[] = L"��";
// 	TCHAR tc;

// 	printf("%s\n", x);
// 	printf("%s\n", x1);
// 	printf("%s\n", x3);
#else
	BOOL a0 = 0x61;
	BYTE a1 = 0x61;
	UINT a2 = 0x61;
	WORD a3 = 0x61;
	DWORD a4 = 0x61;

	printf("%x\n", a0);
	printf("%x\n", a1);
	printf("%x\n", a2);
	printf("%x\n", a3);
	printf("%x\n", a4);

#endif

	getchar();

	return 0;
}