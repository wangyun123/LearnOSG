/*
*	�ο���http://blog.csdn.net/huqinwei987/article/details/23625823
*
*	�ṹ�嶨��
*
*/

#ifndef _STRUCT_CUSTOM_H_
#define _STRUCT_CUSTOM_H_


// ��һ�֣�ֻ�нṹ�嶨��
struct stuff01{  
	char job;//[20];  
	int age;  
	float height;  
}; 

typedef struct {  
	char job;//[20];  
	int age;  
	float height;  
}stuff04;

// �������ַ�ʽ���壬����������󣬲�֪��ʲôԭ�򣿣�
// 1>struct.obj : error LNK2005: "struct stuff03 Huqinwei03" (?Huqinwei03@@3Ustuff03@@A) �Ѿ��� main.obj �ж���
// 1>D:\Learn\LearnOSG\Debug\struct.exe : fatal error LNK1169: �ҵ�һ���������ض���ķ���
#if 0
// �ڶ��֣����Ӹýṹ�����͵ġ��ṹ��������ĳ�ʼ���Ľṹ�嶨��
// ֱ�Ӵ�������Huqinwei  
struct stuff02{  
	char job;//[20];  
	int age;  
	float height;  
}Huqinwei02;

// ��ͬ�ڵڶ��ֶ��巽ʽ
struct stuff03{  
	char job;//[20];  
	int age;  
	float height;  
};  
struct stuff03 Huqinwei03;
#endif

// ���Խṹ�嶨��
void testDefine();
// ���Խṹ�帳ֵ
void testAssign();

#endif //_STRUCT_CUSTOM_H_