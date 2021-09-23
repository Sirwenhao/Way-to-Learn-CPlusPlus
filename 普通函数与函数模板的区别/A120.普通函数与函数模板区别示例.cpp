#include<iostream>
using namespace std;

//普通函数与函数模板的区别

//1、普通函数调用可以发生隐式类型转换
//2、函数模板 用自动类型推导，不可以发生隐式类型转换
//3、函数模板 用显式指定类型，可以发生隐式类型转换

//普通函数
int myAdd01(int a,int b)
{
	return a + b;
}

//函数模板
template<class T>
T myAdd02(T a,T b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';//a - 97 c - 99，对应的ASCII的值
	cout << myAdd01(a, c) << endl;//发生隐式转换，把字符型的c转成int型，并用其ASCII码做运算


	//利用模板调用——自动类型推导
	//cout << myAdd02(a, c) << endl;//不可以发生隐式类型转换，会报错

	//利用模板调用——显示指定类型
	cout << myAdd02<int>(a, c) << endl;//使用<int>显示指定类型，不会报错
}

int main()
{
	test01();

	system("pause");
	
	return 0;
}