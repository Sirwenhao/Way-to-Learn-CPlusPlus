#include<iostream>
using namespace std;
int main()
{
	/*
	- 提示一用户输入高考分数，根据分数做如下判断

	- 分数如果大于600分视为考上一本，大于500分视为考上二本，大于400分视为考上三本，其余视为未考上本科

	- 在一本分数中，大于700分，考入清华，大于650分，考入北大，大于600分，考入人大

	*/

	//1、提示输入高考分数
	int score = 0;
	cout << "请输入您的高考分数：" << endl;
	cin >> score;


	//2、显示高考分数
	cout << "您输入的高考分数为：" << score << endl;

	//3、判断
	if (score > 600) 
	{
	
		cout << "考上一本大学" << endl;
		if (score > 700) 
		{
		
			cout << "恭喜您考入清华大学" << endl;
		}
		else if (score > 650) 
		{
		
			cout << "恭喜您考入北京大学" << endl;
		}
		else 
		{
		
			cout << "恭喜您考入人民大学" << endl;
		}
	}
	else if (score > 500) 
	{
	
		cout << "考上二本大学" << endl;
	}
	else if (score > 400) 
	{
	
		cout << "考上三本大学" << endl;
	}
	else 
	{
	
		cout << "未考上" << endl;
	}

	system("pause");

	return 0;
}