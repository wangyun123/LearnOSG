#include <stdio.h>

int div(int a, int b)
{
	if (b==0)
	{
		throw "1111111";
	}
	return a/b;
}

int main(int argc, char* argv[])
{
// 	printf("try catch ...\n");
// 
// 	try{
// 		int res = div(10, 20);
// 	}catch (char* e){
// 		printf("%s\n", e);
// 	}

	char x[] = "中国";
	//wchar_t x1[] = "中国";
	wchar_t x2[] = L"中国";

	printf("%s\n", x);
	//printf("%x\n", x1);
	printf("%s\n", x2);
	getchar();
	return 0;
}