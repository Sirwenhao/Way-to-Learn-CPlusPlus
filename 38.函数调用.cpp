#include<iostream>
using namespace std;

//函数定义

int add(int num1, int num2)//num1和num2成为形式参数并没有真实的数据，形参
{
	int sum = num1 + num2;

	return sum;
}



int main()
{
	//再main函数中调用add函数

	int a = 10;
	int b = 22;

	//函数调用的语法：函数名称(参数)
	//a和b成为实际参数，实参
	//在调用函数的时候，实参的值会传递给函数的形参
	int c = add(a, b);
	cout << "c = " << c << endl;

	system("pause");

	return 0;
}