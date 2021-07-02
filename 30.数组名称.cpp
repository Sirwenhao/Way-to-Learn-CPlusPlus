#include<iostream>
using namespace std;
int main()
{
	//数组名用途
	//1、可以通过数组名统计整个数组占用内存的大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整个数组占用的空间为 " << sizeof(arr) << endl;
	cout << "第一个元素所占内存空间为 " << sizeof(arr[0]) << endl;
	cout << "数组中元素的个数为 " << sizeof(arr)/sizeof(arr[0]) <<endl;

	//2、可以通过数组名称查看数组的首地址
	cout << "数组的首地址为 " << (int)arr << endl;  //arr前面价格int强制转换为十进制
	cout << "数组中的第一个元素的地址为 " << (int)&arr[3] << endl;

	//数组名是一个常量不能进行赋值操作

	system("pause");

	return 0;
}