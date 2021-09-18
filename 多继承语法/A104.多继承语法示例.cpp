#include<iostream>
using namespace std;

class Base1 
{
public:

	Base1()
	{
		m_A = 10;
	}
	int m_A;
};

class Base2
{
public:

	Base2()
	{
		//m_B = 20;
		m_A = 20;
	}
	//int m_B;
	int m_A;
};

//子类  需要继承Base1和Base2
//语法：class 子类:继承方式 父类1,继承方式 父类2...
class Son :public Base1, public Base2
{
public:
	Son()
	{
		m_C = 100;
		m_D = 200;
	}

	int m_C;
	int m_D;
};

void test01()
{
	Son s;

	cout << "sizeof Son = " << sizeof(s) << endl;

	//当父类中出现同名成员时，需要通过作用域来进行区分
	cout << "Base1 下的 m_A = " << s.Base1::m_A << endl;//此时会产生二义性，由于编译器不清楚所指到底是父类1的还是父类2的
	cout << "Base2 下的 m_A = " << s.Base2::m_A << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}