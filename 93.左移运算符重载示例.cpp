#include<iostream>
using namespace std;

//左移运算符重载
class Person 
{
	friend ostream& operator<<(ostream& cout, Person& p);//如果成员函数是私有的，可以通过友元这一技术访问

	//写一个构造函数给赋初值
public:

	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:

	//利用成员函数重载 左移运算符  p.operator<<(cout) 简化版本  p<<cout
	//不会利用成员函数重载<<运算符，因为无法实现 cout在左侧
	//void operator<<(cout)
	//{

	//}

	int m_A;
	int m_B;
};

//只能利用全局函数重载左移<<运算符
ostream &operator<<(ostream &cout ,Person &p)//本质 operator<< (cout , p)简化形式cout << p
{
	cout << "m_A = " << p.m_A << endl;
	cout << "m_B = " << p.m_B << endl;
	return cout;
}

void test01()
{
	Person p(10, 20);
	//p.m_A = 10;
	//p.m_B = 20;

	cout << p << endl; //套用的是链式编程的思想
}

int main()
{
	test01();

	system("pause");

	return 0;
}