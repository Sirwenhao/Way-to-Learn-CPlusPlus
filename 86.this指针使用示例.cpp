#include<iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		//this指针指向的是  被调用的成员函数  所属的对象
		this->age = age;//此处是p1在调用因此this指向p1
	}

	Person &PersonAddAge(Person &p)//如果要返回本体，必须用引用的形式返回
		//按引用的方式返回，不会创建新的对象；按返回值的方式返回，会创建新的对象。此处思考下按返回值的方式返回最后输出的是多少？（20）
	{
		this->age += p.age;

		//this指向p2的指针，而*this指向的就是p2这个对象本体
		return *this;
	}

	int age;//此处之前的写法都是m_Age，这样才能区分成员变量。如果名字相同，上面Person函数体内的age和下面的就不一样，因此可以使用this指针做区分
};

//1、解决名称冲突
void test01()
{
	Person p1(18);
	cout << "p1的年龄为：" << p1.age << endl;
}


//2、返回对象本身用*this
void test02()
{
	Person p1(10);

	Person p2(10);

	//实现一个把另一个人的年龄加到自身上面的操作

	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

	cout << "p2的年龄为多大：" << p2.age << endl;

}


int main()
{
	//test01();

	test02();

	system("pause");

	return 0;
}