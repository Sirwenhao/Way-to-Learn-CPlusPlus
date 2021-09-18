#include<iostream>
using namespace std;

//动物类
class Animal 
{
public:
	int m_Age;
};

//利用虚继承可以解决菱形继承的问题
//在继承之前加上关键字virtual变为虚继承
// Animal 此时被称为虚基类
//羊类
class Sheep :virtual public Animal {};

//驼类
class Camel :virtual public Animal {};

//羊驼类
class Alpaca :public Sheep, public Camel{};

void test01()
{
	Alpaca st;

	st.Sheep::m_Age = 18;
	st.Camel::m_Age = 20;
	//当菱形继承，两个父类拥有相同数据，需要加以作用域区分

	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Camle::m_Age = " << st.Camel::m_Age << endl;

	//加完virtual关键字之后，也不会存在指向不明确的问题
	cout << "st.m_Age = " << st.m_Age << endl;

	//但上述羊驼年龄有两份，只需要一份即可。菱形继承导致数据由两份，浪费资源
}

int main()
{
	test01();

	system("pause");

	return 0;
}