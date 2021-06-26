#include<iostream>
using namespace std;
//把time的头文件导入
#include<ctime>

int main()
{
	//猜数字
	//案例描述：系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或者过小，如果猜对恭喜玩家胜利，并且退出游戏。

	//之前生成的随机数的都是伪随机数，均为42
	//需要添加随机数种子，作用是利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));

	//1、系统生成随机数
	int num = rand() % 100 + 1; //rand()%100表示生成0~99的一个随机数字，+1之后范围变到1~100

	//2、玩家进行猜测;
		
	int val = 0;

	//3、判断玩家猜测的结果
	while (1)
	{
	
		cin >> val;//在此处给num1值

		if (num < val)
		{
			cout << "输入数字偏大，请重新输入" << endl;
		}
		else if (num > val)
		{
		
			cout << "输入数字偏小，请重新输入" << endl;
		}
		else
		{
		
			cout << "恭喜您猜对了" << endl;
			break;//利用关键字break退出当前循环
		}

	}

	system("pause");

	return 0;
}