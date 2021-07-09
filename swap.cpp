// 还需要把头文件和源文件关联起来

#include"swap.h"  // 双引号表示头文件是自定义的

//函数定义
void swap(int a, int b)   //不需要返回值
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}