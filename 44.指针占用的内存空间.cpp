#include<iostream>
using namespace std;

int main()
{
	//指针所占用的内存空间

	int a = 10;
	//int* p;
	//p = &a;

	//上述两行代码可以等价替换为：
	int* p = &a;

	//在x86系统即32位操作系统环境下，指针默认都是四个字节
	//在x64系统即64位操作系统环境下，指针默认都是八个字节
	//并且指针所占内存的大小与数据类型无关

	cout << "sizeof (int *) = " << sizeof(int *) << endl;
	cout << "sizeof (float *) = " << sizeof(float *) << endl;
	cout << "sizeof (double *) = " << sizeof(double *) << endl;
	cout << "sizeof (char *) = " << sizeof(char *) << endl;

	system("pause");

	return 0;
}