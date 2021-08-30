#include<iostream>
using namespace std;

//赋值运算符的重载

class Person 
{
public:

	Person(int age)
	{
		//将年龄数据开辟到堆区
		m_Age = new int(age);
	}

	//重载赋值运算符
	Person& operator=(Person& p)
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		//编译器提供的代码是浅拷贝
		//m_Age = p.m_Age;

		//提供深拷贝 解决浅拷贝的问题
		m_Age = new int(*p.m_Age);

		//返回自身
		return *this;
	}


	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}

	//年龄的指针
	int* m_Age;

};

void test01()
{
	Person p1(18);

	Person p2(20);

	Person p3(30);

	p3 = p2 = p1;//赋值操作

	cout << "p1的年龄为：" << *p1.m_Age << endl;

	cout << "p2的年龄为：" << *p2.m_Age << endl;

	cout << "p3的年龄为：" << *p3.m_Age << endl;
}

int main()
{
	test01();

	//int a = 10;

	//int b = 20;

	//int c = 30;

	//c = b = a;//对于内置的数据类型，允许这种连等的操作

	//cout << "a = " << a << endl;

	//cout << "a = " << a << endl;

	//cout << "a = " << a << endl;

	system("pause");

	return 0;
}