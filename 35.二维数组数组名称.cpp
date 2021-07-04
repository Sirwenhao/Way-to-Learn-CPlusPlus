#include<iostream>
using namespace std;
int main()
{
	//二维数组名称

	//1、可以查看占用的内存空间大小
	int arr[2][3] = { {2,3,1},{6,9,8} };
	cout << "二维数组所占用的内存空间为：" << sizeof(arr) << endl;
	cout << "二维数组的一行所占用的内存空间为：" << sizeof(arr[0]) << endl;

	//统计数组有多少行多少列
	cout << "二维数组的行数为：" << sizeof(arr)/sizeof(arr[0]) << endl;
	cout << "二维数组的列数为：" << sizeof(arr[0])/sizeof(arr[0][0]) << endl;

	//2、可以查看内存的首地址
	cout << "二维数组的首地址为: " << arr << endl;
	cout << "二维数组第一行的首地址为: " << arr[0] << endl;

	//如果是看某个确定的元素的地址要加&符号
	cout << "第一个元素的地址为: " << &arr[1][0] << endl;

	system("pause");

	return 0;
}