#include<iostream>
using namespace std;

int main()
{
	//1、定义一个指针
	int a = 10;

	//指针定义的语法：数据类型 *指针变量名;
	int * p;
	//让指针与变量产生关系,让指针记录变量a的地址
	p = &a;  //&是取地址符号

	cout << "a的地址为：" << &a << endl;
	cout << "指针p为：" << p << endl;


	//2、使用指针
	//可以通过解引用的方式，找到指针指向的内存。解引用即在指针前面加一个 *,可以找到指针指向的内存中的数据

	*p = 1000; //所以*p表示的就是指针p指向的地址中存储的数据,通过指针间接的修改了指针的存储的内容

	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	system("pause");

	return 0;
}