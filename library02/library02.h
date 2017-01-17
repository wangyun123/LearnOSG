/*
*	2）工程library02: def文件中的EXPORTS语句 
*
*	添加*.def文件，编译器->输入->模块定义文件中指定该def文件
*	注：使用.def文件从DLL中导出变量时，不需要在变量上指定__declspec(dllexport)
*	但是，在任何使用DLL的文件中，仍必须在数据声明上使用__declspec(dllimport)
*/

#ifndef LIBRARY_02_H
#define LIBRARY_02_H

int add2(int a, int b);
int sub2(int a, int b);
int mul2(int a, int b);
int div2(int a, int b);

#endif //LIBRARY_02_H