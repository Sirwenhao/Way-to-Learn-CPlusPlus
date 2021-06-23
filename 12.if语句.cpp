#include<iostream>
using namespace std;
int main()
{
	//选择结构 单行if语句
	//用户输入分数，如果分数大于600，视为考上一本大学，在屏幕上输出

	//1、让用户输入分数
	int score = 0;
	cout << "请输入一个分数" << endl;
	cin >> score;

	//2、打印用户输入的分数
	cout << "您输入的分数为：" << score << endl;

	//3、判断分数是否大于600，如果大于，则输出
	//注意事项： if语句后面不能加分号；，如果加了分号，则无论条件满足与否，都会输出
	if (score > 600)
	{ 
		cout << "恭喜您考上了！！！" << endl; 
	}	

	system("pause");

	return 0;
}