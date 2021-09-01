#include<iostream>
using namespace std;

//继承方式

//公共继承
class Base1 
{
public:
	int m_A;

protected:
	int m_B;

private:
	int m_C;
};

class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;//父类中的公共权限成员，到子类中依然是公共权限
		m_B = 20;//父类中的保护权限成员，到子类中依然是保护权限
		//m_C = 30;//父类中的私有权限成员，子类访问不到
	}
};

void test01()
{
	Son1 s1;
	s1.m_A = 100;//公共权限类内可以访问，类外同样可以访问
	//s1.m_B = 120;//保护权限类内可以访问，类外不可以访问
}

//保护继承
class Base2
{
public:
	int m_A;

protected:
	int m_B;

private:
	int m_C;
};

class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 100;//父类中公共成员，到子类中变为保护权限
		m_B = 120;//父类中保护成员，到子类中变为保护成员
		//m_C = 130;//无论以何种方式继承，父类中的私有成员子类访问不到
	}
};

void test02()
{
	Son2 s1;
	//s1.m_A = 000;//在Son2中 m_A变为保护权限，因此类外访问不到
	//s1.m_B = 111;//在Son2中 m_B变为保护权限，类外不可以访问
}

//私有继承
class Base3 
{
public:
	int m_A;

protected:
	int m_B;

private:
	int m_C;
};

class Son3 :private Base3
{
public:
	void func()
	{
		m_A = 11;//父类中的公共成员，到子类中变为私有成员
		m_B = 12;//父类中的保护成员，到子类中变为私有成员
		//m_C = 13;//父类中私有成员子类无法访问
	}
};

class GrandSon3 :public Son3
{
public:
	void func()
	{
		//m_A = 1000;//到了Son3中，m_A变为私有，即使是子类，也无法访问父类私有内容
		//m_B = 1200;//同上
	}
};

void test03()
{
	Son3 s1;
	//s1.m_A = 213;//到子类Son3中后，变为私有成员，类外无法访问
	//s1.m_B = 123;//同上
	//s1.m_C = 234;//同上
}

int main()
{


	system("pause");

	return 0;
}