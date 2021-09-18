#include<iostream>
using namespace std;

//继承中同名成员的处理方式
class Base 
{
public:
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base-func()调用" << endl;
	}

	void func(int a)//父类中函数的重载
	{
		cout << "Base-func(int a)调用" << endl;
	}

	int m_A;
};

class Son :public Base
{
public:

	Son()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "Son-func()调用" << endl;
	}

	int m_A;
};

//同名成员属性的处理方式
void test01()
{
	Son s;
	cout << "Son 下的 m_A = " << s.m_A << endl;//那么问题来了，s.m_A是100还是200？（答案：200）
	
	//如果通过子类对象 访问到父类中的同名成员，需要加作用域
	cout << "Base 下的 m_A = " << s.Base::m_A << endl;//加上作用域：Base::就可以了。
}

//同名成员函数的处理方式
void test02()
{
	Son s;
	s.func();//直接调用 调用是子类中同名成员

	//如何调用到父类的同名成员函数（指明作用域）
	s.Base::func();

	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
	//如果想访问到父类中被隐藏的童名成员函数，需要加作用域
	s.Base::func(100);
}

int main()
{
	//test01();

	test02();

	system("pause");

	return 0;
}