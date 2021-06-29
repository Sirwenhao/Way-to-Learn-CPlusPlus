#include<iostream>
using namespace std;
int main() 
{
	//乘法口诀表,我可以写出计算完成之后的乘法表，但是如何按照乘法表的形状进行排列呢?

	//难点：列数小于等于行数这个点不好想出来，而乘法表中缺少的部分就是由这一条件所控制的
	//难点：输出的格式如何才能像乘法表一样，也是由上述条件所决定的。
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)  //j <= i是核心步骤
		{
			cout << j << "*" << i << "=" << i*j << "  ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}