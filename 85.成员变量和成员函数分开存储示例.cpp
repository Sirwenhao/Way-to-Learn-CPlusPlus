#include<iostream>
using namespace std;

//成员变量 和 成员函数 分开存储的

class Person 
{
	int m_A;// 非静态成员变量  属于类的对象上的 调用test02结果为4个字节

	static int m_B; // 静态成员变量 不属于类的对象上的  调用test02结果也是4个字节

	void func() //非静态成员函数  不属于类的对象上  成员变量和成员函数是分开存储的
	{}

	static void func2()// 静态成员函数 不属于类的对象上
	{}
};

int Person::m_B = 10;// 静态成员变量的特点：类内声明，类外初始化

void test01()
{
	Person p;
	//空对象占用的内存空间为：1个字节
	//C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
	//每个空对象也应该有一个独一无二的内存地址
	cout << "对象p所占的内存空间大小" << sizeof(p) << endl;
}

void test02()
{
	Person p;

	cout << "对象p所占的内存空间大小" << sizeof(p) << endl;
}

int main()
{
	//test01();

	test02();

	system("pause");

	return 0;
}
