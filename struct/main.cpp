#include <stdio.h>

//1���սṹ��
struct Student1{

};
//2�������������Ľṹ��
struct Student2{
	int a;
	int b;
};
//3����һ����Ա�����Ľṹ��
struct Student3{
	void func()
	{

	}
};
//4��������������һ����Ա�����Ľṹ��
struct Student4{
	int a;
	int b;
	void func()
	{
		a=1;
		b=2;
		printf("this: %x\n", this);
	}
};
int main(int argc, char* argv[])
{
	printf("size of student1:%d\n", sizeof(Student1));
	printf("size of student2:%d\n", sizeof(Student2));
	printf("size of student3:%d\n", sizeof(Student3));
	printf("size of student4:%d\n", sizeof(Student4));

// 	Student1 st1;
	Student2 st2;
	Student2 st3 = {0};
// 	st2.a=10;
// 	st2.b=11;
// 	Student3 st3;
// 	Student4 st4;
// 	st4.func();

	return 0;
}