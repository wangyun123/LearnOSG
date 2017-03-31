/*
*	学习宽字符
*	参考： 
*	
*	“中”字符编码：
*	GB2312:		0XD6 0XD0
*	UNICODE:	0X4E 0X2D
*
*	注意：
*	（1）;
*
*		
*
*	（2）;
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
// 	char y = "中";
	char x[] = "中";
	char x1[] = {0xd6, 0xd0, 0};
	//wchar_t x2 = "中";
	wchar_t x3[] = L"中";
// 	TCHAR tc;

	printf("%s\n", x);
	printf("%s\n", x1);
	printf("%s\n", x3);
	getchar();

	return 0;
}