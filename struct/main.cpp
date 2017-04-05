#include <stdio.h>
#include "struct.h"

//////////////////////////////////////[1]////////////////////////////////////
// 1���ö�����Struct1Ϊһ���ṹ���������
// �����ڶ���������� Struct1 st;
struct Struct1
{
	int a;
	char b;
};
// 2���ö�����Struct2Ϊһ�������������ݵĽṹ�����
// Struct2����Ϊһ��ȫ�ֵĽṹ�����
struct
{
	int a;
	char b;
}Struct2;

////////////////////////////////////////[2]//////////////////////////////////
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

//////////////////////////////////////////[3]////////////////////////////////
// ��һ�֣�ֻ�нṹ�嶨��
struct Stuff1{  
	char job;//[20];  
	int age;  
	float height;  
}; 

// �ڶ��֣����Ӹýṹ�����͵ġ��ṹ��������ĳ�ʼ���Ľṹ�嶨��
// ֱ�Ӵ�������Huqinwei  
struct Stuff2{  
	char job;//[20];  
	int age;  
	float height;  
}Huqinwei2;

// �����֣���ͬ�ڵڶ��ֶ��巽ʽ
struct Stuff3{  
	char job;//[20];  
	int age;  
	float height;  
};  
struct Stuff3 Huqinwei3;

// �����֣��ṹ�嶨�������ͬ��ʣ������������ļ�ʹ�øýṹ�嶨��
typedef struct {  
	char job;//[20];  
	int age;  
	float height;  
}Stuff4;


// ���Խṹ�嶨��
void testStructDefine();
// ���Խṹ�帳ֵ
void testStructAssign();

int main(int argc, char* argv[])
{
#if 0
	printf("size of student1:%d\n", sizeof(Student1));
	printf("size of student2:%d\n", sizeof(Student2));
	printf("size of student3:%d\n", sizeof(Student3));
	printf("size of student4:%d\n", sizeof(Student4));

	Student1 st1;
	Student2 st2;
	Student2 st3 = {0};
	st2.a=10;
	st2.b=11;
	Student3 st3;
	Student4 st4;
	st4.func();
#endif

#if 0
	printf("the size of struct: %d\n", sizeof(Struct1));
	printf("the size of struct: %d\n", sizeof(Struct2));

	Struct1 s1;
	s1.a = 0x12345678;
	s1.b = 0x11;

	Struct2.a = 0x12345678;
	Struct2.b = 0x11;

	printf("the address of struct: %x\n", &s1);
	printf("the value of struct: %x\n", s1);
	printf("the address of struct: %x\n", &Struct2);
	printf("the value of struct: %x\n", Struct2);
#endif

#if 1
	testStructDefine();
	testStructAssign();
#endif

	return 0;
}

// ���Խṹ�嶨��
void testStructDefine()
{
	printf("the size of struct: %d\n", sizeof(Stuff1));
	printf("the size of struct: %d\n", sizeof(Stuff2));

	struct Stuff1 s1;
	s1.job = 0x61;
	s1.age = 21;
	s1.height = 180.0;

	Huqinwei2.job = 0x62;
	Huqinwei2.age = 22;
	Huqinwei2.height = 180.0;

	Stuff4 s4;
	s1.job = 0x64;
	s1.age = 24;
	s1.height = 180.0;

	printf("the address of struct: %x\n", &s1);
	printf("the value of struct: %x\n", s1);
	printf("the address of struct: %x\n", &Huqinwei2);
	printf("the value of struct: %x\n", Huqinwei2);

}
// ���Խṹ�帳ֵ
void testStructAssign()
{
	struct Stuff1 s1 = {0x61, 30, 180.0};
	// �˴�Ӧ���Ǳ�����Ĭ�ϵĹ��캯��
	struct Stuff1 s2 = s1; 
	// �˴�����Huqinwei2��ȫ�ֱ���Huqinwei2ͬ������Ȼ����ͨ���ˣ���
	// �ñ�����ssջ�У���ȫ�ֱ�����ds����
	// ���˸о����������ķ��ʴ�������ջ�еģ�����Ҳ�������ȫ�ֱ������У�����
	printf("global: [%x] %c, %d, %f\n", &Huqinwei2, Huqinwei2.job, Huqinwei2.age, Huqinwei2.height);
	struct Stuff2 Huqinwei2 = {0x63, 30, 180.0};
	printf("local : [%x] %c, %d, %f\n", &Huqinwei2, Huqinwei2.job, Huqinwei2.age, Huqinwei2.height);
}
