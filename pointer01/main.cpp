/*
*	ѧϰ������ָ���ʹ��
*	�ο��� ǳ��int*p[ ]��int(*p)[ ]������
*	http://www.jb51.net/article/39690.htm
*
*	ע�⣺
*	��1��int* p[2];	��Ч��p[2][];
*
*		Ϊ����ȷ����������ȷ������Ϊ2*n�͵ġ�
*
*	��2��int (*p)[2];	��Ч��p[][2];
*
*		Ϊn*2�͵������ָ���÷�����������ȷ��������ȷ����
*
*	2017-03-22
*/

#include <stdio.h>

// 
// int* p[2];
void func1()
{
	char a[3] = {1,2,3};
	char b[4] = {4,5,6,7};

	char* p[2];
	p[0] = a;
	p[1] = b;

	for (int i=0; i<3; i++)
		printf("%d\t", *p[0]++);
	printf("\n");

	for (int i=0; i<4; i++)
		printf("%d\t", *(p[1]+i));
	printf("\n");
}

//int (*p)[2];
void func2()
{
	char (*p)[2];
	char a[][2] = {{11,12},{21,22},{31,32}};
	p = a;

	for(int i=0; i<3; i++)
	{
		for (int j=0; j<2; j++)
		{
			//printf("%d\t",*(*(p+i)+j));
			//
			printf("%d\t",p[i][j]);
		}
		printf("\n");
	}
}

int main(int argc, char* argv[])
{
	func1();
	func2();
	getchar();
	return 0;
}