#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//文本文件 读文件
void test01()
{
	//1、包含头文件

	//2、创建流对象
	ifstream ifs;

	//3、打开文件  并且判断是否打开成功
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	//4、读数据(四种方法)
	
	//第一种:
	char buff[1024] = { 0 };//创建权威0的字符数组
	while (ifs >> buff)//利用右移运算符读数据，读到头返回一个假的标记，然后退出while循环
	{
		cout << buff << endl;
	}

	////第二种
	//char buff[1024] = {0};
	//while (ifs.getline(buff, sizeof(buff)))//两个参数一个是字符串首地址，一个是字符串长
	//{
	//	cout << buff << endl;
	//}

	////第三种
	//string buff;
	//while (getline(ifs, buff))
	//{
	//	cout << buff << endl;
	//}

	////第四种(把文件中的字符一个个读取)，不推荐速度慢
	//char c;
	//while ((c = ifs.get()) != EOF)//EOF(end of file)作为是否读取到文件尾的判断标志
	//{
	//	cout << c;
	//}

	//5、关闭文件
	ifs.close();
}

int main()
{
	test01();

	system("pause");

	return 0;
}