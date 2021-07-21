#include<iostream>
#include<string>
using namespace std;

//1、创建英雄结构体
struct Hero 
{
	//姓名
	string name;

	//性别
	string sex;

	//年龄
	int age;

};

//冒泡排序 实现年龄升序排列
void bubbleSort(struct Hero heroArray[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//判断如果j下标的元素大于j+1下标的元素，则交换
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

void printHero(struct Hero heroArray[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << heroArray[i].name << " 年龄：" << heroArray[i].age
			<< " 性别：" << heroArray[i].sex << endl;
	}
}

int main()
{
	//2、创建一个数组存放五名英雄
	struct Hero heroArray[5] =
	{
		{"刘备","男",23},
		{"关羽","男",22},
		{"张飞","男",21},
		{"赵云","男",20},
		{"貂蝉","女",19},
	};

	//使用输出简单验证
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "排序前：" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << heroArray[i].name << " 年龄：" << heroArray[i].age
			<< " 性别：" << heroArray[i].sex << endl;
	}


	//3、对数组进行排序，按照年龄进行升序排序
	bubbleSort(heroArray, len);

	//4、将排序后的结果打印输出
	cout << "排序后：" << endl;
	printHero(heroArray, len);

	system("pause");

	return 0;
}