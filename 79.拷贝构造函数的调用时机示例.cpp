#include<iostream>
using namespace std;

//拷贝构造函数的调用时机



class Person 
{
public:
	Person()
	{
		cout << "person默认构造函数的调用" << endl;
	}
	Person(int age)
	{
		cout << "person有参构造函数的调用" << endl;
		m_Age = age;
	}
	Person(const Person &p)
	{
		cout << "person拷贝构造函数的调用" << endl;
		m_Age = p.m_Age;
	}
	~Person()
	{
		cout << "person默认析构函数的调用" << endl;
	}

	int m_Age;
};

//1、使用一个已经创建好的对象来初始化一个新对象
void test01()
{
	Person p1(20);
	Person p2(p1);//p2把p1身上的属性都拷贝了

	cout << "p2的年龄为：" << p2.m_Age << endl;
}


//2、值传递的方式给函数参数传值
void doWork(Person p3)
{

}

void test02()
{
	Person p3;
	doWork(p3);
}


//3、值方式返回局部对象
Person doWork1()
{
	Person p4;
	cout << (int*)&p4 << endl;
	return p4;
}

void test03()
{
	Person p = doWork1();
	cout << (int*)&p << endl;
}

int main()
{
	test01();
	test03();

	system("pause");

	return 0;
}