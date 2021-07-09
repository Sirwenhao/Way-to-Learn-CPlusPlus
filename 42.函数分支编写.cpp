#include<iostream>
using namespace std;

//写好源文件和头文件之后使用写好的文件时，需要将swap.h文件包含进来
#include"swap.h"


//函数的分文件编写
//实现两个数字交换的函数

////函数的声明
//void swap(int a, int b);

////函数定义
//void swap (int a, int b)   //不需要返回值
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}

//1、创建.h后缀名的头文件
//2、创建.cpp后缀名的源文件
//3、在头文件中写函数的声明
//4、在源文件中写函数的定义

int main() 
{
	int a = 10;
	int b = 20;
	swap(a, b);


	system("pause");

	return 0;
}