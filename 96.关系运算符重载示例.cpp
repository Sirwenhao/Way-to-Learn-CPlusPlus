#include<iostream>
#include<string>
using namespace std;

//重载关系运算符（==和!=）

class Person 
{
public:

	Person(string name, int age)//利用构造函数给姓名和年龄赋初值
	{
		m_Age = age;
		m_Name = name;
	}

	//重载关系运算符==号
	bool operator==(Person &p)//成员函数调用的操作，需要传入一个参数
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			//cout << "p1等于p2" << endl;
			return true;
		}
		else
		{
			return false;
		}
	}

	//重载关系运算符!=号
	bool operator!=(Person &p)
	{
		if (this->m_Name != p.m_Name && this->m_Age != p.m_Age)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	string m_Name;
	int m_Age;
};

void test01()
{
	Person p1("Tom", 18);

	Person p2("Tom", 18);

	if (p1 == p2)//自定义变量无法使用C++默认的关系运算符，因此需要重载
	{
		cout << "p1和p2相等的" << endl;
	}
	else
	{
		cout << "p1和p2不相等" << endl;
	}

	if (p1 != p2)
	{
		cout << "p1和p2不相等" << endl;
	}
	else
	{
		cout << "p1和p2相等" << endl;
	}
}

int main()
{
	test01();

	system("pause");

	return 0;
}