#include<iostream>
#include<string>
using namespace std;

//函数调用运算符重载

//打印输出类
class MyPrint 
{
public:

	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void MyPrint02(string test)
{
	cout << test << endl;
}

void test01()
{
	MyPrint myPrint;

	myPrint("hello world");//由于使用起来非常类似于函数调用，因此成为仿函数

	MyPrint02("hello world");
}

//仿函数非常的灵活，没有固定的写法
//加法类

class MyAdd 
{
public:

	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	MyAdd myAdd;
	int ret = myAdd(190, 200);
	cout << "ret = " << ret << endl;

	//匿名函数对象,其特点是当前函数执行完毕之后立即被释放
	cout << "MyAdd()(190,200) = " << MyAdd()(190, 200) << endl;

}


int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}