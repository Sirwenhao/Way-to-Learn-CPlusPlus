#include<iostream>
using namespace std;

//类模板中成员函数的创建时机
//类模板中成员函数在调用时才去创建

class Person1
{
public:

	void showPerson1()
	{
		cout << "show Person1" << endl;
	}
};

class Person2
{
public:

	void showPerson2()
	{
		cout << "show Person2" << endl;
	}
};

template<class T>
class MyClass
{
public:

	T obj;

	//类模板中的成员函数
	void func1()
	{
		obj.showPerson1();
	}

	void func2()
	{
		obj.showPerson2();
	}
};

void test01()
{
	MyClass<Person1>m;
	m.func1();
	//m.func2();//编译会出错，说明函数调用才会去创建成员函数
}

int main()
{
	test01();

	system("pause");

	return 0;
}