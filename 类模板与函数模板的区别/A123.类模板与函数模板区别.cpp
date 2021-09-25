#include<iostream>
#include<string>
using namespace std;

//类模板与函数模板区别
template<class NameType,class AgeType = int>//直接在此处给定默认数据类型，则在下面调用时就不需再给
class Person 
{
public:

	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "name=" << this->m_Name << "  age=" << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

//1、类模板没有自动类型推导的使用方式
void test01()
{
	//Person p("孙悟空",999);//报错，无法用自动类型推导实现
	Person<string, int>p("孙悟空",99);//只能用显示指定类型

	p.showPerson();
}


//2、类模板在模板参数列表中可以有默认参数
void test02()
{
	Person<string>p("猪八戒",1000);//上面已经指定过，就不需要再指定数据类型,此种做法在函数模板中是不允许的，只有在类模板中才允许

	p.showPerson();
}


int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}