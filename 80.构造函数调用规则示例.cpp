#include<iostream>
using namespace std;

//构造函数的调用示例
//1、创建一个类，C++编译器会给每个类都添加至少三个函数
//默认构造函数(空实现)
//析构函数(空实现)
//拷贝构造函数(值拷贝)


//2、如果我们写了有参构造函数，编译器就不再提供默认构造，依然提供拷贝构造
//如果我们写了拷贝构造函数，编译器就不再提供其他的构造函数（包括默认构造函数）
class Person 
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}

	Person(int age)
	{
		cout << "Person的有参构造函数调用" << endl;
		m_Age = age;
	}

	Person(const Person &p)
	{
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}

	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}

	int m_Age;
};

void test01()
{
	Person p;
	p.m_Age = 18;

	Person p2(p);

	cout << "p2的年龄为：" << p2.m_Age << endl;
}

void test02()
{
	//如果用户提供有参构造，编译器不会提供默认构造，会提供拷贝构造
	Person p1;//此时如果用户自己没有提供默认构造，会出错
	Person p2(10);//用户提供的有参
	Person p3(p2);//此视如果用户没有提供拷贝构造，编译器会提供

	//如果用户提供拷贝构造，编译器不会提供其他构造函数
	Person p4;//此视用户自己没有提供默认构造，会出错
	Person p5(10);//此视如果用户自己没有提供有参，会出错
	Person p6(p5);//用户自己提供拷贝构造
}

int main()
{
	test01();

	system("pause");

	return 0;
}