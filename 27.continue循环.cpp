#include<iostream>
using namespace std;
int main()
{
	//continue语句
	//输出奇数
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	
	}
	//输出偶数
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
		continue;

	}

	system("pause");

	return 0;
}