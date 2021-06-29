#include <iostream>
using namespace std;

//常量的定义方式
//1、#define宏常量
//2、const修饰的变量

//1、#define宏常量
#define Day 7

int main()
{
	//Day = 14;//Day是一个定义好的常量，不能修改
	cout << "一周总共有：" << Day << "天" << endl;

	//2、const修饰的变量
	const int month = 12;
	//month = 24;//在17行代码未加const之前是合法的，加上const之后由于month成为了常量因此不能修改
	cout << "一年总共有：" << month << "个月" << endl;

	system("pause");

	return 0;

}