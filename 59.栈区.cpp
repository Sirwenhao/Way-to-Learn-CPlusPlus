#include<iostream>
using namespace std;

//栈区数据注意事项：不要反悔局部变量的地址
//战区的数据由编译器管理开辟和释放

int * func()
{
	int a = 10; //局部变量，存放在栈区，栈区数据在函数执行完后自动释放
	return &a;

}

int main()
{
	//接受func函数的返回值
	int* p = func();

	cout << *p << endl;//第一次可以打印正确的数字是因为编译器做了一次保留
	cout << *p << endl;

	system("pause");

	return 0;
}