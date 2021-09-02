#include<iostream>
using namespace std;

//继承中的对象模型

class Base 
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son :public Base
{
public:

	int m_D;
};

//利用开发人员命令提示工具查看对象模型
//首先跳转盘符跳转到当前要查看的文件的路径下
//查看命名
//cl /d1 reportSingleClassLayout类名 文件名


void test01()
{
	//结果为：16
	//父类中所有非静态成员属性都会被子类继承下去
	//父类中私有成员属性 是被编译器给隐藏了，因此是访问不到，但是确实被继承了

	cout << "size of Son = " << sizeof(Son) << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}