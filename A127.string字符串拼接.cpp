#include<iostream>
#include<string>
using namespace std;

//string字符串拼接的操作

void test01()
{
	string str1 = "我";
	str1 += "爱玩游戏";
	cout << "str1 = " << str1 << endl;

	str1 += ':';
	cout << "str1 = " << str1 << endl;

	string str2 = "tanchishe";
	str1 += str2;
	cout << "str2 = " << str2 << endl;

	string str3 = "I";
	str3.append(" love ");
	cout << "str3 = " << str3 << endl;

	str3.append("foods noodles and meets", 8);
	cout << "str3 = " << str3 << endl;

	str3.append(str2);
	cout << "str3 = " << str3 << endl;

	str3.append(str2, 0, 3);
	cout << "str3 = " << str3 << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}