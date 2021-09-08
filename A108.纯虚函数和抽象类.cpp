#include<iostream>
using namespace std;

//纯虚函数和抽象类

class Base
{
public:

	//纯虚函数
	//只要有一个纯虚函数，这个类称为抽象类
	//抽象类的特点：
	//1、无法实例化对象
	//2、抽象类的子类  必须要重写父类中的纯虚函数，否则也属于抽象类
	virtual void func() = 0;
};

class Son :public Base
{
public:
	virtual void func() 
	{
		cout << "func函数调用" << endl; 
	};//写此句之前，Son s;处会报错

};

void test01()
{
	//Base b;//报错，原因：栈区上抽象类是无法实例化对象
	//new Base;//报错，原因：堆区上抽象类是无法实例化对象

	//Son s;//子类必须重写父类中的纯虚函数，否则无法实例化对象

	Base* base = new Son;//使用多态,此处new的是哪个对象，就调用那个
	base->func();
}

int main()
{
	test01();

	system("pause");

	return 0;
}