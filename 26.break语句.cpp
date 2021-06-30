#include<iostream>
using namespace std;
int main()
{
	//break的使用时机

	////1、出现在switch语句中
	//cout << "选择难度" << endl;
	//cout << "1、困难" << endl;
	//cout << "2、一般" << endl;
	//cout << "3、简单" << endl;

	//int select = 0;
	//cout << "请输入选择难度" << endl;
	//cin >> select;

	//switch (select)
	//{
	//	case 1:
	//		cout << "您选择的是困难" << endl;
	//		break;
	//	case 2:
	//		cout << "您选择的是一般" << endl;
	//		break;
	//	case 3:
	//		cout << "您选择的是简单" << endl;
	//		break;
	//	default:
	//		break;
	//} 

	////2、出现在循环语句中
	//for (int i = 0; i < 10; i++)
	//{
	//	//如果i等于5退出循环

	//	if (i == 5)
	//	{
	//		break;
	//	}
	//	cout << i << endl;
	//}
		
	

	//3、出现在嵌套循环语句中
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}