#include<iostream>
using namespace std;

//函数的声明
//比较函数，实现两个整型数字之间的比较，返回较大的值


//如果想把自定义的函数写在主函数之后，可以先进行声明
//声明可以写多次，但定义只能写一次
//函数声明
int max(int a, int b);  //声明在前，定义在后




int main()  //一般倾向于将主函数放在所有函数的最后，省的代码执行时找不到某些函数或者也可以声明
{
	int a = 19;
	int b = 18;
	cout << max(a, b) << endl;

	system("pause");

	return 0;
}


int max(int a, int b)
{
	//使用三目运算符
	return a > b ? a : b;
}