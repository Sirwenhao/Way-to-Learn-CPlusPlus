#include<iostream>
using namespace std;
int main()
{
	//练习案例：水仙花数
	//案例描述：水仙花数是指一个三位数，每位数字的三次幂之和等于它本身，例如：1^3+5^3+3^3= 153
	//请使用do……while语句来实现

	/*  我自己写的部分(死循环)
	int num = 0;  //num是三位数不能从0开始
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "请输入一个三位数" << endl;// 不用给值，是靠循环自己加值的
	cin >> num; //同上

	num1 = num / 100;
	num2 = num % 10;
	num3 = (num / 10) % 10;   // 同上，取余和取模运算同级

	do
	{

		if (num = num1 ^ 3 + num2 ^ 3 + num3 ^ 3)
		{
			cout << "水仙花数为：" << num << endl;
		}
		else
		{
			break;
		}
	} while (100 < num < 999);
	*/

	//1、先打印所有的三位数
	int num = 100;//从100开始给，100是最小的三位数

	do
	{

		int a = 0;
		int b = 0;
		int c = 0;
		//2、从所有的三位数中找到水仙花数
		a = num / 100;//百位
		b = num % 10;//个位
		c = num / 10 % 10;//十位
		if (num == a*a*a + b*b*b + c*c*c)//注意：等于号是两个等号
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);




	system("pause");

	return 0;
}