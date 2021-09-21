#include<iostream>
using namespace std;


//实现两个整形交换函数
void swapInt(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

//实现两个浮点型交换函数
void swapDouble(double &a,double &b)
{
	double temp = a;
	a = b;
	b = temp;
}


//函数模板
template<typename T> //声明一个模板,告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	swapInt(a, b);
	cout << "a = " << a << "    " << "b = " << b << endl;

	double c = 3.12324;
	double d = 4.12143;
	swapDouble(c, d);
	cout << "c = " << c << "    " << "d = " << d << endl;

	//利用函数模板实现交换
	//有两种使用方法
	//1、自动类型推导
	int e = 11;
	int f = 22;

	mySwap(e, f); //编译器根据我们传入的数据类型，自动推导T对应的数据类型
	cout << "e = " << e << "    " << "f = " << f << endl;

	//2、显示指定类型
	int g = 13;
	int h = 23;
	mySwap<int>(g, h); //直接指定T的数据类型
	cout << "g = " << g << "    " << "h = " << h << endl;

}



int main()
{
	test01();

	system("pause");
	
	return 0;
}