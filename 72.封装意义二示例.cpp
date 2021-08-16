#include<iostream>
using namespace std;

//访问权限  三种
// 公共权限 public      成员类内可以访问，类外也可以访问
// 保护权限 protected   成员类内可以访问，类外不可以访问
// 私有权限 private     成员类内可以访问，类外不可以访问 子类可以访问父类中的保护内容
// 保护权限和私有权限的差别在于继承，在继承的语法出可以体现 子类不可以访问父类中的私有内容

class Person
{
	//公共权限
public:
	string m_Name;

protected:
	//保护权限
	string m_Car;

private:
	//私有权限
	string m_Password;

public:
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}
};

int main()
{
	//实例化具体对象
	Person p1;
	p1.m_Name = "李四";
	//p1.m_car = "奔驰"; // 保护权限内容，在类外访问不到
	//p1.m_Password = 123; // 私有权限内容，在类外访问不到

	system("pause");

	return 0;
}