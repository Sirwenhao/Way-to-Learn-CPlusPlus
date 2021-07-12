#include<iostream>
using namespace std;

//实现两个数字进行交换
//void swap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "swap01中的a = " << a << endl;
//	cout << "swap01中的b = " << b << endl;
//}

void swap02(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}

int main()
{
	//指针和函数
	//1、值传递,函数体内部的值发生交换(上部分)，函数体外部并未发生交换(下部分)
	int a = 10;
	int b = 20;
	//swap01(a, b);

	//2、地址传递，可以修改实参的数据
	//如果是地址传递，可以修饰实参
	swap02(&a, &b);  //传入两个变量的地址，用两个指针对应去接收

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	


	system("pause");

	return 0;
}