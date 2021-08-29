#include<iostream>
using namespace std;
#include<string>

//建筑物类
class Building
{

	//goodGay 全局函数 是Building好朋友，可以访问Building中 私有成员
	friend void goodGay(Building *building);//全局函数做友元：只需要把全局函数复制到类内，加上friend。甚至都不用写在public作用域内。

public:
	Building()
	{
		m_BedRoom = "卧室";
		m_SittingRoom = "客厅";
	}


public:
	string m_SittingRoom;

private:
	string m_BedRoom;
};

//全局函数
void goodGay(Building* building)
{
	cout << "好基友正在访问：" << building->m_SittingRoom << endl;

	cout << "好基友正在访问：" << building->m_BedRoom << endl;
}

void test01()
{
	Building building;
	goodGay(&building);

}

int main()
{

	//
	test01();

	system("pause");

	return 0;
}