#include<iostream>
#include<string>
using namespace std;

//类模板对象做函数参数

template<class T1,class T2>
class Person
{
public:

	Person(T1 name, T2 age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	void showPerson()
	{
		cout << "姓名：" << this->m_Name << "  年龄：" << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};
//1、指定传入类型
void printPerson1(Person<string,int>&p)
{
	p.showPerson();
}

void test01()
{
	Person<string,int>p("孙",99);
}

//2、参数模板化
template<class T1,class T2>
void printPerson2(Person<T1 ,T2>&p)
{
	p.showPerson();
}

void test02()
{
	Person<string, int>p("猪", 98);
	printPerson2(p);
}

//3、整个类模板化


int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}