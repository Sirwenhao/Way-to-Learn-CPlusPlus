#include<iostream>
using namespace std;

//实现通用的对数组排序的函数
//排序规则：从大到小
//算法：选择排序，利用两个数组 char数组和int数组来进行测试

//交换函数模板
template<class T>
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}


//排序算法
template<class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;//认定最大值下标
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] > arr[j])
			{
				max = j;//更新最大值
			}
		}
		if (max != i)
		{
			//交换max和i下标的元素
			mySwap(arr[max],arr[i]);
		}
	}
}

//提供打印数组的模板
template<class T>
void printArray(T arr[],int len)
{
	for (int i = 0; i < len;i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void test01()
{
	//测试char数组
	char charArr[] = "badcfe";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr,num);
	printArray(charArr, num);
}

void test02()
{
	//测试int数组
	int intArr[] = { 2,3,4,5,1,7,9,6,8 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArray(intArr, num);
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}