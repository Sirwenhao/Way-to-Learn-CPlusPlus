#include<iostream>
using namespace std;
int main()
{
	////空指针
	////1、空指针用于给指针变量进行初始化
	//int* p = NULL;


	////2、空指针是不可以进行访问的
	//*p = 100;  //操作非法


	//野指针
	int* p = (int*)0x1100;  //野指针在语法上是合法的，但是野指针所访问的内存空间并未经过申请，并无权限


	system("pause");

	return 0;
}