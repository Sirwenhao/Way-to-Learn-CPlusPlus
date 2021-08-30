#include<iostream>
using namespace std;

//重载递增运算符


//自定义的整型
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);

public:
	MyInteger()
	{
		m_Num = 0;
	}

	//重载前置递增运算符
	MyInteger& operator++()//返回值的数据类型也要根据实际所返回的返回值进行修改
		//上述返回引用的原因是：不返回引用值也不会报错，但是在多次执行++操作时，原值会有区别。此处返回引用是为了一直对一个数据进行递增操作。
		//C++中默认数据类型的前置递增操作既是对一个数据进行操作的，因此只有采用引用的方式才可以
	{
		//前置递增运算符要先进行++运算
		m_Num++;

		//再将自身做返回
		return *this;//此处最后的返回值仍然是myint，this指针是指向自身的，对其解引用*this
	}

	//重载后置递增运算符
	//此处括号内不写int会报错：无法重载仅按返回类型区分的函数，因为函数能否重载的条件里并没有返回类型不同便可重载的条件
	//int代表占位参数，可以用于区分前置和后置，只认int
	MyInteger operator++(int)//后置递增不用采用引用的方式，采用返回值的方式
	{
		//先 记录当时结果
		MyInteger temp = *this;
		//后 递增
		m_Num++;
		//最后将记录结果做返回
		return temp;
	}

private:
	int m_Num;
};

//重载左移运算符
ostream &operator<<(ostream &cout, MyInteger myint)
{
	cout << myint.m_Num;   //此处在写友元之前是访问不到的
	return cout;
}


void test01()
{
	MyInteger myint;

	cout << ++(++myint) << endl;//在重载递增运算符之前写++会报错
	cout << myint << endl;
}

void test02()
{
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;
}

int main()
{
	//test01();

	//int a = 0;
	//cout << ++(++a) << endl;
	//cout << a << endl;

	test02();

	system("pause");

	return 0;
}
