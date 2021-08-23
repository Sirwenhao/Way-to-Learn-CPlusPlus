#include< iostream>
using namespace std;

//初始化列表

class Person
{
public:

	//传统初始化操作
	//Person(int a, int b, int c)
	//{
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}


	//利用初始化列表初始化属性
	//Person() :m_A(10), m_B(20), m_C(30)//但是这样子传值有个问题就是只能传进去此处给好的值，改进见下
	//{

	//}

	Person(int a,int b,int c) :m_A(a), m_B(b), m_C(c)//此处一定注意冒号的位置
	{

	}

	int m_A;
	int m_B;
	int m_C;
};

void test01()
{
	//Person p(10, 20, 30);

	Person p(12,13,14);//改进之后在定义类时直接给出参数值就好
	cout << "m_A = " << p.m_A << endl;
	cout << "m_B = " << p.m_B << endl;
	cout << "m_C = " << p.m_C << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}