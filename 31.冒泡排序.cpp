#include<iostream>
using namespace std;
int main() 
{
	//利用冒泡排序实现升序序列
	int arr[10] = { 1,3,5,7,2,4,6,8,9,0 };
	cout << "排序前：" << sizeof(arr)/sizeof(arr[0]) << endl;
	for (int i = 0; i < 10; i++) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	//开始冒泡排序
	//总的排序轮数为：元素个数-1
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		//内层循环对比次数：元素个数-当前轮数-1
		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - i - 1; j++)
		{
			//如果前一个数字比后一个数字大，交换两个数字
			if (arr[j] > arr[j + 1]) 
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
	}
	//排序后的结果
	cout << "排序后的结果为：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;



	system("pause");

	return 0;
}