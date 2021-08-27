#include<iostream>
using namespace std;

//空指针调用成员函数

class Person
{
public:

	void showClassName()
	{
		cout << "this is Person class" << endl;
	}

	void showPersonAge()
	{
		//报错的原因是因为传入的指针为NULL,相当于传入空指针还要访问指针内的属性，属于无中生有

		//解决办法：加上判断语句
		if (this == NULL)
		{
			return;
		}

		cout << "age = " << this->m_Age << endl;
	}

	int m_Age;
};

void test01()
{
	Person* p = NULL;

	p->showClassName();

	p->showPersonAge();
}

int main()
{
	test01();

	system("pause");

	return 0;
}