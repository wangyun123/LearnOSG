/*
*	学习函数调用的反汇编
*
*	参考：
*
*	疑问：4、带局部变量（感觉vs2010编译器添加了很多安全机制，用vs6.0试试）
*
*/

#include <stdio.h>
//1、无参数无返回值：空函数
void func1()
{

}
//2、有参数无返回值：空函数
//与func1()函数一样
void func2(int a, int b)
{

}
//3、有参数有返回值：
int func3(int a, int b)
{
	return a+b;
}
//4、无参数无返回值：带局部变量
void func4()
{
	int a;
	int b;
	int c;
	c=a+b;
}

int main(int argc, char* argv[])
{
// 	int a=1;
// 	int b=2;
// 	int c=3;
	func1();
	func2(1,2);
	int c=func3(1,2);
	func4();
	return 0;
}