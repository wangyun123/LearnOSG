#include <stdio.h>
#include "Vector.h"

int main(int argc, char* argv[])
{
	Vector vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(6);

	vec.print();
	getchar();
	return 0;
}