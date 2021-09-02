#include<iostream>
using namespace std;

class Base 
{
public:
	Base()
	{
		cout << "Base构造函数！" << endl;
	}
	~Base()
	{
		cout << "Base的析构函数!" << endl;
	}
};

class Son:public Base
{
public:
	Son()
	{
		cout << "Son构造函数！" << endl;
	}
	~Son()
	{
		cout << "Son的析构函数!" << endl;
	}
};

void test01()
{
	//Base b;

	//继承中的构造和析构的顺序如下：
	//先构造父类，再构造子类，析构的顺序与构造的顺序相反
	Son s;
}

int main()
{
	test01();

	system("pause");

	return 0;
}