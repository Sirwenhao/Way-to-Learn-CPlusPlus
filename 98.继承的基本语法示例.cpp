#include<iostream>
using namespace std;

//普通实现页面

//Java页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++、...（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};

//继承实现页面

//公共页面类
class BasePage 
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java、Python、C++、...（公共分类列表）" << endl;
	}
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};

//继承的好处：减少重复代码
//语法：class 子类:继承方式 父类
//子类 也称为 派生类
//父类 也称为 基类


//Java页面
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Java学科视频" << endl;
		cout << "----------" << endl;
		cout << "----------" << endl;
	}
};

//Python页面
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Python学科视频" << endl;
		cout << "----------" << endl;
		cout << "----------" << endl;
	}
	
};

//C++页面
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "C++学科视频" << endl;
		cout << "----------" << endl;
		cout << "----------" << endl;
	}
};


void test01()
{
	cout << "Java页面" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.content();
	ja.left();

	cout << "Python页面" << endl;
	Python py;
	py.header();
	py.footer();
	py.content();
	py.left();

	cout << "Java页面" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.content();
	cpp.left();
}

int main()
{
	test01();

	system("pause");

	return 0;
}