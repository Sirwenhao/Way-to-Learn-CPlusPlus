#include<iostream>
using namespace std;

//值传递
// 定义函数，实现两个数字进行交换的函数
//如果函数不需要返回值，声明的时候数据类型可以写void：无

void swap(int num1, int num2)
{
	cout << "交换前" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;


	int temp = 0;
	temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	return;  //由于没有实际的返回值，所以return后面什么都不写或者return直接不写
}


int main()
{
	
	//在主程序中调用定义好的函数
	int a = 10;
	int b = 22;

	//函数的形参发生变化并不会影响实参
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	
	return 0;
}