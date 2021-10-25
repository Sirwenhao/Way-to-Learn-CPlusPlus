#include<iostream>
using namespace std;

//类模板的分文件编写问题以及解决

//template<class T1, class T2>
//class Person
//{
//public:
//
//	Person(T1 name, T2 age);
//
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//
//};

//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "姓名为：" << this->m_Name << endl;
//	cout << "年龄为：" << this->m_Age << endl;
//}

//#include "person.h" //此种情况下编译器生成代码会报错，将此命令修改为#include "person.cpp"即可成功运行（第一种解决方式）
//原因类模板中的成员函数一开始是不会创建的，所以导致链接不到person.cpp中的代码，但如果直接包含person.cpp就可以将头文件和cpp文件链接起来，但是一般没有直接包含cpp文件的
//根本愿意在于类模板中的成员函数的创建时机是在调用阶段，只有调用才会创建，一开始不会创建
//第二种解决方式：常用的解决方式，将.h和.cpp中的内容写在一起，将后缀名修改为.hpp文件
#include "person.hpp"

void test01()
{
	Person <string, int>p("Jerry", 18);
	p.showPerson();
}

int main()
{
	test01();

	system("pause");

	return 0;
}