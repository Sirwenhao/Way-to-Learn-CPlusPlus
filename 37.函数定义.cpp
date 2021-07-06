#include<iostream>
using namespace std;

//函数的定义
//语法：
//返回值类型  函数名  (数列表) { 函数体语句  return表达式 }

//示例：实现两个整型相加，并将相加的结果返回

int add(int num1 = 88, int num2 = 99)
{
	int sum = 0;
	sum = num1 + num2;
	return sum;
}

int main() 
{


	system("pause");  //此行代码实现的是按任意键继续的功能

	return 0;
}