#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	//1、引用必须初始化，必须明确指向
	//int& b;  //这种写法是错误的，没有明确指向引用的对象
	int& b = a;

	//2、引用初始化之后，不可以更改
	int c = 20;

	b = c;//此处已经是赋值操作而不是更改引用

	cout << "a = " << a << endl;  //此处考虑一下a的值是怎么变为20的
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;


	system("pause");

	return 0;
}