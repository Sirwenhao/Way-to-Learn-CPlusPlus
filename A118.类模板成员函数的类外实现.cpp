#include<iostream>
#include<string>
using namespace std;

// 类模板成员函数的类外实现
template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	/*{
		this->m_Age = age;
		this->m_Name = name;
	}*/

	void showPerson();
	/*{
		cout << "姓名: " << this->m_Name << endl;
		cout << "年龄: " << this->m_Age << endl;
	}*/

	T1 m_Name;
	T2 m_Age;
};

//构造函数的类外实现
template<class T1,class T2>//其次加上模板
Person<T1,T2>::Person(T1 name, T2 age)  //首先指明作用域Person::；最后在Person后面加上<T1,T2>声明是类模板的类外实现
{
	this->m_Age = age;
	this->m_Name = name;
}

//成员函数的类外实现
template<class T1, class T2>//其次加上模板
void Person<T1, T2>::showPerson()  //首先指明作用域Person::；最后在Person后面加上<T1,T2>声明是类模板的类外实现
{
	cout << "姓名: " << this->m_Name << endl;
	cout << "年龄: " << this->m_Age << endl;
}

void test01()
{
	Person<string, int>P("Tom", 20);
	P.showPerson();
}

int main()
{
	test01();

	system("pause");
	
	return 0;
}