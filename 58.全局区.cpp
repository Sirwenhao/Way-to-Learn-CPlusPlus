#include<iostream>
using namespace std;

int g_a = 10;
int g_b = 10;

// const修饰的全局变量
const int c_g_a = 10;
const int c_g_b = 10;


int main()

{
	// 全局区，所存放变量：全局变量、静态变量、常量

	//创建一个普通的局部变量
	int a = 10; // 写在了函数体内必为局部变量
	int b = 10;

	cout << "局部变量a的地址为：" << (int)&a << endl;
	cout << "局部变量b的地址为：" << (int)&b << endl;

	cout << "全局变量g_a的地址为：" << (int)&g_a << endl;
	cout << "全局变量g_b的地址为：" << (int)&g_b << endl;

	// 静态变量，在普通变量前加static，属于静态变量
	static int s_a = 10;
	static int s_b = 10;

	cout << "静态变量s_a的地址为：" << (int)&s_a << endl;
	cout << "静态变量s_b的地址为：" << (int)&s_b << endl;

	// 常量：字符串常量、const修饰的变量

	// 字符串常量
	cout << "字符串常量的地址为：" << (int)&"hello world" << endl;;

	//const修饰的全局变量=全局常量，const修饰的局部变量=局部变量
	cout << "全局常量 c_g_a：" << (int)&c_g_a << endl;
	cout << "全局常量 c_g_b：" << (int)&c_g_b << endl;

	const int c_l_a = 10;
	const int c_l_b = 10;

	cout << "局部常量 c_l_a的地址为： " << (int)&c_l_a << endl;
	cout << "局部常量 c_l_b的地址为： " << (int)&c_l_b << endl;

	system("pause");

	return 0;
}