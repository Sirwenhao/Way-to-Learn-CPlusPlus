#include<iostream>
using namespace std;

//函数重载的注意事项
//1、引用作为重载的条件

void func(int& a) // int &a = 10; 不合法(func(10)这种情况下，不能用这个func函数)
{
	cout << "func(int &a)调用" << endl;
}

void func(const int& a) // const int &a = 10;相当于编译器做了优化，创建了一个临时的空间，并指向这个临时空间
{
	cout << "func(const int &a)调用" << endl;
}

void func2(int a,int b = 10) 
{
	cout << "func2(int a,int b)调用" << endl;
}

void func2(int a) 
{
	cout << "func2(int &a)调用" << endl;
}

int main()
{
	//
	//int a = 10;
	//func(a); // 调用的是第一个func

	//func(10);

	//func2(10);  //此时编译器会报错，因为两个func2函数均可以调用，存在二义性.函数重载碰到默认参数，出现二义性。

	system("pause");

	return 0;
}