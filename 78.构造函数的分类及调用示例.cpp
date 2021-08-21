#include<iostream>
using namespace std;

//构造函数的分类及调用
//分类
//1、按参数分类  无参构造和有参构造
//2、按类型分类  普通构造和拷贝构造
class Person
{
public:
	//构造函数
	//1、无参构造（默认构造函数，不写的情况下编译器提供的默认无参）
	Person()
	{
		cout << "Person的无参构造函数调用" << endl;
	}
	//2、有参构造
	Person(int a)
	{
		cout << "Person的有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person &p)  //const是限制传参时不能改变Person身上的属性，传参必须按照引用的方式进行传递
	{
		//将传入的人p身上的所有属性，传给Person
		age = p.age;
		cout << "Person的拷贝构造函数调用" << endl;
	}

	//析构函数
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
	int age;
};

//调用
void test01()
{
	//1、括号法
	//Person p1;//默认构造函数的调用
	//Person p2(10);//有参构造函数
	//Person p3(p2);//拷贝构造函数

	//注意事项
	//调用默认构造函数的时候，不要加()
	//因为下面这行代码，编译器会认为是一个函数的声明，不会认为是一个创建对象的过程
	//Person p1();//加()虽然程序不报错，但是有问题，解释见上

	/*cout << "p2的年龄为：" << p2.age << endl;
	cout << "p3的年龄为：" << p3.age << endl;*/


	//2、显示法
	Person p1;
	Person p2 = Person(10);//有参构造
	Person p3 = Person(p2);//拷贝构造

	Person(10);//匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象
	cout << "aaaa" << endl;

	//注意事项2
	//不要利用拷贝构造函数  初始化匿名对象  编译器会认为Person(p3)  ==  person p3;是一个对象声明，产生重定义
	//Person(p3);

	//3、隐式转换法
	Person p4 = 10; //相当于 写了 Person p4 = Person(10);
	Person p5 = p4; //拷贝构造 
}



int main()
{
	test01();

	system("pause");

	return 0;
}