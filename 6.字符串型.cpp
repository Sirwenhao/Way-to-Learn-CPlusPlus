#include<iostream>
//C++风格需要事先定义头文件
#include<string>
using namespace std;

int main()
{

	//1、C风格的字符串
	//注意事项A：char 字符串名 []最后面的中括号不能丢
	//注意事项B：等号之后需用双引号将字符串值包含起来
	char str[] = "hello world";
	cout << str << endl;

	//2、C++风格字符串
	string str2 = "hello world";
	cout << str2 << endl;//C++风格虽然写起来相对简单，但是必须先定义头文件如上

	system("pause");

	return 0;
}