#include<iostream>
using namespace std;

//常函数
class Person 
{
public:

	//this指针的本质  是指针常量  指针的指向是不可以修改的
	//const Person *const this;
	//在成员函数后面加const,修饰的是this指针，让指针指向的值也不可以修改
	void showPerson() const //此处加上const后函数体内部的值便不可以修改了，本质是修饰this指针
	{
		//this->m_A = 100; //隐含在每一个成员函数体内部都有一个this指针
		this->m_B = 100;
		//this = NULL;//this指针不可以修改指针的指向的
	}

	void func()
	{
		m_A = 100;
	}

	int m_A;
	mutable int m_B;//特殊变量，即使在常函数中，也可以修改这个值,加关键字mutable
};

void test01()
{
	Person p;
	p.showPerson();
	p.func();
}

//常对象

void test02()
{
	const Person p;//在对象前加const,变为常对象
	//p.m_A = 100;//常对象不允许修改普通的成员函数
	p.m_B = 100;//m_B是特殊值，在常对象下也可以修改

	//常对象只能调用常函数
	p.showPerson();
	//p.func();//常对象 不可以调用普通的成员函数，因为普通成员函数可以修改属性

}

int main()
{


	system("pause");

	return 0;
}