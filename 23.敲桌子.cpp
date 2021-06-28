#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i < 101; i++)
	{

		if (i % 7 == 0 || i % 10 == 0 || i / 10 == 7)
		{
			cout << "ÇÃ×À×Ó" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	system("pause");

	return 0;
}