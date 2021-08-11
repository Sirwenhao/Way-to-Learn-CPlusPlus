#include<iostream>
using namespace std;

//交换函数

//1、值传递
//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "Swap01中的a = " << a << endl;
//	cout << "Swap01中的b = " << b << endl;
//}

//2、地址传递
//void mySwap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//
//	cout << "Swap01中的a = " << *a << endl;
//	cout << "Swap01中的b = " << *b << endl;
//}


//3、引用传递
void mySwap03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "Swap01中的a = " << a << endl;
	cout << "Swap01中的b = " << b << endl;
}


int main()
{
	int a = 10;
	int b = 20;

	//mySwap01(a, b);//值传递形参不会修饰实参
	//mySwap02(&a, &b);//地址传递形参会修饰实参
	mySwap03(a, b);//引用传递形参也会修饰实参

	//综上形参修饰实参共有两种方法：地址传递和引用传递

	cout << "a = " << a << endl;  //第二种情况里a和b的值发生改变
	cout << "b = " << b << endl;


	system("pause");

	return 0;
}