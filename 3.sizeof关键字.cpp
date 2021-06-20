#include <iostream>
using namespace std;

int main()
{
	//整型：short（2） int（4） long（4） longlong（8）
	//利用sizeof可以求出数据类型占用的内存大小

	short num1 = 10;
	//cout << "short占用的内存空间大小为" << sizeof(short) << endl;
	cout << "short占用的内存空间大小为" << sizeof(num1) << endl;//使用变量名或者数据类型都可以

	int num2 = 10;
	cout << "int占用的内存空间大小为" << sizeof(int) << endl;

	long num3 = 10;
	cout << "long占用的内存空间大小为" << sizeof(long) << endl;

	long long num4 = 10;
	cout << "long long占用的内存空间大小为" << sizeof(long long) << endl;

	//大小比较
	//short < int <= long <= long long  int和long之间小于等于的关系是因为，在不同的操作系统中long占用的字节不同

	system("pause");

	return 0;
}