#include<iostream>
using namespace std;
int main()
{
	//三只小猪称重，并判断那个最重
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//让用户输入三只小猪的重量
	cout << "请输入小猪A的体重" << endl;
	cin >> num1;

	cout << "请输入小猪B的体重" << endl;
	cin >> num2;

	cout << "请输入小猪C的体重" << endl;
	cin >> num3;

	cout << "小猪A的体重为：" << num1 << endl;

	cout << "小猪B的体重为：" << num2 << endl;

	cout << "小猪C的体重为：" << num3 << endl;

	//判断那只最重
	if (num1 > num2) 
	{
	
		if (num1 > num3) 
		{
		
			cout << "最重的小猪为：" << num1 << endl;
		}
		else 
		{
		
			cout << "最重的小猪为：" <<  num3 << endl;
		}
	}
	else
	{
		if (num2 > num3)
		{

			cout << "最重的小猪为：" << num2 << endl;
		}
		else
		{

			cout << "最重的小猪为：" << num3 << endl;
		}

	}

	system("pause");

	return 0;
}