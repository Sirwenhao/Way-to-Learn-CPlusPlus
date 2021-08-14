#include<iostream>
using namespace std;

//函数默认参数

//如果我们自己传入数据，就用自己的数据，如果没有，那么使用默认数据
//语法：返回值类型  函数名（形参= 默认值）

int func(int a = 19, int b = 29, int c = 20)
{
	return a + b + c;
}

//注意事项
//1、如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值

int func2(int a, int b = 10, int c = 19)//比如此位置上b有默认参数，那么c也得有，a就无所谓了
{
	return a + b + c;
}

//2、如果函数的声明有了默认参数，函数实现就不能有默认参数
//声明和实现只能有一个有默认参数

//int func3(int a = 10, int b = 10);//此句就是指函数的声明

int func3(int a = 10, int b = 10)//这个函数体就是实现部分的代码，不能再给默认参数。还有些程序此处和声明处参数不同，有二义性也不行
{
	return a + b;     //此时没有报错,但在调试时会报错，错误为func3重定义函数参数
}

int main()
{
	cout << func() << endl;

	cout << func3(10, 10) << endl;;

	system("pause");

	return 0;
}