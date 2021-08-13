#include<iostream>
using namespace std;

//创建一个打印数据的函数
void showValue( const int & value) //在此处加上const之后，就可以修饰形参了，且不能再做更改
{
	//value = 1000;  //若在此处做修改，则a的值也会随着修改，因为a和value指向的是同一块地址。
	//上面函数传参时若给加上const时，value的值就不能再做修改了

	cout << "value = " << value << endl;
}

int main()
{
	//常量引用
	//使用场景：用来修饰形参，防止误操作

	//int a = 10;
	//int& ref = 10; //引用必须引一块合法的内存空间,10不是内存空间
	//const int& ref = 10;//此种写法是合法的
	//这种写法实质上是编译器帮助我们做了修改，编译器创建了temp，int temp = 10; int & ref = temp;
	//ref = 20; //加入const后变为只读，不可以修改

	int a = 100;
	showValue(a);

	system("pause");

	return 0;
}