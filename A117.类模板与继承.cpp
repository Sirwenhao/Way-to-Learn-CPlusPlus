#include<iostream>
using namespace std;

//类模板与继承
template<class T>
class Base
{
	T m;
};

class Son :public Base<int> // 此处报错的原因是父类中的参数列表的数据类型未指明，因此需要分配的内存大小无法获知。因此必须指明父类中的T的数据类型
{

};
void test01()
{
	Son c;
}

//如果想灵活指定父类中T的类型，子类也需要变类模板
template<class T1,class T2>
class Son2 :public Base<T2> 
{
public:
	Son2()
	{
		cout << "T1的类型为：" << typeid(T1).name() << endl;
		cout << "T2的类型为：" << typeid(T2).name() << endl;
	}
	T1 obj;
};

void test02()
{
	Son2<int, char>S2;
}

int main()
{
	test02();

	system("pause");

	return 0;
}