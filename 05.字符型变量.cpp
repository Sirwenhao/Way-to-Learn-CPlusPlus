#include <iostream>
using namespace std;

int main()
{
	//1、字符型变量的创建方式
	char ch = 'a';
	cout << ch << endl;

	//2、字符型变量所占内存的大小
	cout << "字符型变量所占的内存空间为：" << sizeof(char) << endl;

	//3、字符型变量常见的错误
	//第一种是单引号错写为双引号，第二种是单引号内写多个字符


	//4、字符型变量存放时对应的ASCII编码
	cout << (int)ch << endl;//int强制将字符型变量ch转换为十进制


	system("pause");

	return 0;
}