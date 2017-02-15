#include <stdio.h>

#include "../staticLibrary1/lib.h"
#pragma comment(lib, "../release/staticLibrary1.lib")

int main(int argc, char* argv[])
{
	printf("loading the static library!\n");
	int result;
	result = add(10,20);
	printf("result=%d\n", result);

	getchar();
	return 0;
}