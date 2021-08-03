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

//1、添加联系人
void addPerson(AddressBooks* abs)
{
	//先判断通讯录是否已满，若已满则不再继续添加
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		//添加具体联系人

		//姓名
		string name;
		cout << "请输入姓名:" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//性别
		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex = 0;

		while (true)
		{
			//如果输入是1 或者 2可以退出循环，因为输入的是正确值
			//如果输入有误，重新输入
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//电话
		cout << "请输入联系电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//住址
		cout << "请输入家庭地址：" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通讯录中的人数
		abs->m_Size++;
		cout << "添加成功" << endl;

		system("pause"); //请按任意键继续操作
		system("cls"); //清屏操作
	}
}

//2、显示所有的联系人
void showPerson(AddressBooks* abs)
{
	//判断通讯录中人数是否为0，如果为0，提示记录为空
	//如果不为0，显示记录的联系人信息
	if (abs->m_Size == 0)
	{
		cout << "当前的记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名: " << abs->personArray[i].m_Name << "\t";
			cout << "性别: " << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";  //此处使用三目运算符对男女性别进行判断
			cout << "年龄: " << abs->personArray[i].m_Age << "\t";
			cout << "电话: " << abs->personArray[i].m_Phone << "\t";
			cout << "住址: " << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");  // 按任意键继续
	system("cls");  // 清屏
}

//检测联系人是否存在，如果存在返回联系人在数组中的具体位置，如不存在反回-1
// 参数1  通讯录  参数2 对比姓名

int isExist(AddressBooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		//找到用户输入的姓名了
		if (abs->personArray[i].m_Name == name)
		{
			return i; // 找到的话，就返回这个人在数组中的下标编号
		}
	}
	return -1; // 如果遍历结束都没有找到，返回值-1
}

// 3、删除联系人
void deletePerson(AddressBooks* abs)
{
	cout << "请输入您要删除的联系人" << endl;

	string name;
	cin >> name;

	int ret = isExist(abs, name);
	// ret == -1  未查到
	// ret != -1  查到了

	if (ret != -1)
	{
		// 查找到人要进行删除操作
		for (int i = ret; i < abs->m_Size; i++)
		{
			// 数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;  // 更新通讯录中的人员数
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}

// 4、查找指定的联系人信息

void findPerson(AddressBooks* abs)
{
	cout << "请输入需要查找的联系人" << endl;
	string name;
	cin >> name;

	// 判断指定的联系人是否存在
	int ret = isExist(abs, name);

	if (ret != 1) // 找到联系人
	{
		cout << "姓名为：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别为：" << abs->personArray[ret].m_Sex << "\t";
		cout << "年龄为：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话为：" << abs->personArray[ret].m_Phone << "\t";
		cout << "住址为：" << abs->personArray[ret].m_Addr << endl;
	}
	else  // 未找到联系人
	{
		cout << "查无此人" << endl;
	}

	// 按任意键清屏
	system("pause");
	system("cls");
}


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
	//创建通讯录结构体变量
	AddressBooks abs;

	//初始化通讯录中当前人员
	abs.m_Size = 0;

	int select = 0; // 创建用户选择输入的变量


	while (true)
	{
		//函数调用showMenu()
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1:
			addPerson(&abs);
			break; // 1、添加联系人

		case 2:
			showPerson(&abs);
			break; // 2、显示联系人

		case 3:
			deletePerson(&abs);
			break; // 3、删除联系人

		case 4:
			findPerson(&abs);
			break; // 4、查找联系人

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