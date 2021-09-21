#include<iostream>
using namespace std;

//函数模板的注意事项


template<class T> // typename可以替换成class
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
//1、自动类型推导，必须推导出一致的数据类型T
void test01()
{
	int a = 10;
	int b = 20;
	double c = 3.14;
	mySwap(a, b);
	//mySwap(a, c);//报错，类型不匹配
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//2、模板必须要确定出T的数据类型，才可以使用
template<class T>
void func()
{
	cout << "func函数的调用" << endl;
}

void test02()
{
	func<int>();//报错，推导不出T的数据类型，要想使用只能自己给定数据类型，比如<int>
}

int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}