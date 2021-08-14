#include<iostream>
using namespace std;

//占位参数
void func(int a, int)//第二个int就是占位参数
{
	cout << "this is a test" << endl;
}

int main()
{
	//目前这个展位参数是没有用到的
	func(10,10);

	system("pause");

	return 0;
}