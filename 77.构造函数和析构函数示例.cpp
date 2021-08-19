#include<iostream>
using namespace std;

//对象的初始化和清理
//1、构造函数 进行初始化

class Person 
{
public:
	//1.1、构造函数
	//没有返回值 不用写void
	//函数名 与类名相同
	//构造函数可以有参数，可以重载
	//创建对象的时候，构造函数会自动调用，而且只调用一次
	Person()
	{
		cout << "Person 构造函数的调用" << endl;
	}

	//2、析构函数 进行清理操作
	//没有返回值 不写void
	//函数名和类名相同 在名称前加~
	//析构函数不可以有参数不能重载
	//对象销毁前 会自动调用析构函数，而且只会调用一次
	~Person()
	{
		cout << "Person 的析构函数调用" << endl;
	}

};



void test01()
{
	Person p;//在栈上的数据，test01执行完毕后会释放这个对象，在释放前会自动调用
}

int main()
{
	test01();

	system("pause");

	return 0;

}