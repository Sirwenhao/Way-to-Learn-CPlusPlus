#include<iostream>
using namespace std;

int main()
{
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//两个整数相除结果依然是整数,将小数部分去掉

	int a2 = 10;
	int b2 = 20;

	cout << a2 / b2 << endl;//此步按照上述规则去掉了小数部分的.5，因此结果为0

	int a3 = 10;
	int b3 = 0;

	//cout << a3 / b3 << endl;//除数不可为0，操作非法

	//小数相除
	double d1 = 0.5;
	double d2 = 0.25;
	cout << d1 / d2 << endl;

	//取模运算的本质就是求余数
	int e1 = 10;
	int e2 = 3;

	cout << e1 % e2 << endl;

	int f1 = 10;
	int f2 = 20;

	cout << f1 % f2 << endl;

	//C++不允许两个小数做取模运算

	//1、前置递增
	int a = 10;
	++a;//让变量+1
	cout << "a = " << a << endl;

	//2、后置递增
	int b = 10;
	b++;
	cout << "b = " << b << endl;

	//3、前置和后置的区别
	//前置递增 先让变量+1 然后进行表达式的运算
	int g1 = 10;
	int g2 = ++g1 * 10;
	cout << "g1 = " << g1 << endl;
	cout << "g2 = " << g2 << endl;

	//后置递增 先进行表达式的运算，后让变量+1
	int g3 = 10;
	int g4 = g3++ * 10;
	cout << "g3 = " << g3 << endl;
	cout << "g4 = " << g4 << endl;

	system("pause");

	return 0;
}