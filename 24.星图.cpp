#include<iostream>
using namespace std;
int main()
{
	//利用嵌套循环执行星图

	//先打印一行星图
	//外层循环执行一次，内层循环执行一周
	for (int j = 0; j < 9; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << "* "; //endl在C++中是换行的意思
		}
		cout << endl;
	}
	

	system("pause");

	return 0;

}