// 封装函数显示该界面，如void showMenu()
// 在main函数中调用封装好的函数


#include<iostream>
#include<string>
using namespace std;
#define MAX 1000

//设计联系人结构体,每个联系人在通讯录中所存储的信息
struct Person
{
	//姓名
	string m_Name;
	//性别
	int m_Sex;  // 1、男  2、女
	//年龄
	int m_Age;
	//电话
	string m_Phone;
	//住址
	string m_Addr;
};

//通讯录结构体
struct AddressBooks
{
	//通讯录中保存的联系人的数组
	struct Person personArray[MAX];

	//通讯录中当前记录的联系人的个数
	int m_Size;
};

// 菜单界面
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出联系人  *****" << endl;
	cout << "***************************" << endl;
}

int main()
{
	int select = 0; // 创建用户选择输入的变量


	while (true) 
	{
		//函数调用showMenu()
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1:; break; // 1、添加联系人
		case 2:; break; // 2、显示联系人
		case 3:; break; // 3、删除联系人
		case 4:; break; // 4、查找联系人
		case 5:; break; // 5、修改联系人
		case 6:; break; // 6、清空联系人
		case 0:cout << "欢迎下次使用" << endl;
			system("pause");
			break; // 0、退出联系人
			return 0;
		default:; break; //
		}
	}
	
	system("pause");

	return 0;
}