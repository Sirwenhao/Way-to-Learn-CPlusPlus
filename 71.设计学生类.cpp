#include<iostream>
#include<string>
using namespace std;

//设计一个学生类

class Student 
{
public:

	//类中的属性和行为 我们统称为成员
	//属性 也称为成员属性和成员变量
	//行为 也称为成员方法和成员函数
	string s_Name;
	long long s_ID;

	//行为
	void Print()
	{
		cout << "姓名：" << s_Name << endl;
		cout << "学号：" << s_ID << endl;
	}
	//给姓名赋值
	void setName(string name)
	{
		s_Name = name;
	}
	//给学号赋值
	void setID(long long ID)
	{
		s_ID = ID;
	}

};

int main()
{
	//创建具体类对象
	Student S;

	//给对象的属性赋值
	//S.s_Name = "文豪";
	S.setName("文豪");
	//S.s_ID = 20013082036;
	S.setID(20013082036);

	S.Print();

	system("pause");

	return 0;
}