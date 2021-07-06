#include<iostream>
#include<string>
using namespace std;
int main()
{
	//二维数组案例-考试成绩统计

	//1、创建二维数组
	int scores[3][3] = { {100,100,100},{90,50,100},{60,70,80} };

	string names[3] = { "张三","李四","王五" };

	//2、统计每个人的分数总和

	for (int i = 0; i < 3; i++)
	{
		int score = 0;
		for (int j = 0; j < 3; j++)
		{

			score += scores[i][j];
			//cout << score;
		}
		cout << names[i] << "的分数总和为：" << score << endl;
	}

	system("pause");

	return 0;
}