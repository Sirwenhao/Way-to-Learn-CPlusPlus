#include<iostream>
using namespace std;
int main()
{
	//1、创建小猪体重数组
	int arr[5] = { 300,350,200,400,250 };

	//2、从数组中找到最大值并打印
	int max = 0;//先行认定一个最大值
	for (int i = 0; i < 5; i++)
	{
		
		if (arr[i] > max)  //如果值比max大，就把大的值给max
		{
			max = arr[i];
			
		}
		
	}
	cout << max << endl;

	system("pause");

	return 0;
}