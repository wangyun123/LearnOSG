/*
*	ѧϰ�������õķ����
*
*	�ο���
*
*	���ʣ�4�����ֲ��������о�vs2010����������˺ܶలȫ���ƣ���vs6.0���ԣ�
*
*/

#include <stdio.h>
//1���޲����޷���ֵ���պ���
void func1()
{

}
//2���в����޷���ֵ���պ���
//��func1()����һ��
void func2(int a, int b)
{

}
//3���в����з���ֵ��
int func3(int a, int b)
{
	return a+b;
}
//4���޲����޷���ֵ�����ֲ�����
void func4()
{
	int a;
	a=1;
}
//5��ָ�����
void func5(int* a)
{
	//a = (int*)10;
	*a = 10;
}
//6��ָ�����
void func6(int& a)
{
	a=10;
}
int main(int argc, char* argv[])
{
	int bb = 0x12345678;
 	int a=1;
 	int b=2;
 	int c=3;
	func1();
	func2(1,2);
	c=func3(1,2);
	func4();
	int* pa = &a;
	func5(pa);
	func6(b);
	return 0;
}