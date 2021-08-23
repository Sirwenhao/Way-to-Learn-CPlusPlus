#include<iostream>
#include<string>
using namespace std;

//类对象作为类成员

//手机类
class Phone
{
public:
	//Phone m_Phone = pName  隐式转换法
	Phone(string pName)
	{
		cout << "Phone的构造函数调用" << endl;
		m_PName = pName;
	}

	string m_PName;
};

//人类
class Person
{
public:

	Person(string name, string pName):m_Name(name),m_Phone(pName)
	{
		cout << "Person的构造函数调用" << endl;
	}

	//姓名
	string m_Name;

	//手机
	Phone m_Phone;
};

void test01()
{
	Person p("张三", "Apple 12 pro MAX");

	cout << p.m_Name << "使用" << p.m_Phone.m_PName << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}