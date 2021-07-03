#include<iostream>
using namespace std;
int main()
{
	//实现数组元素逆置

	//1、创建数组
	int arr[5] = { 1,3,2,5,4 };
	cout << "数组逆置前：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	//2、实现逆置
	//2.1、记录起始下标的位置
	//2.2、记录结束下标的位置
	//2.3、起始下标与结束下标的元素互换
	//2.4、起始位置++  结束位置--
	//2.5、循环执行

	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	
	while (start < end)
	{
		int temp = arr[end];
		arr[end] = arr[start];
		arr[start] = temp;
		start++;
		end--;

	}

	//3、打印逆置后的数组
	cout << "元素逆置后的顺序为：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	
	system("pause");

	return 0;
}