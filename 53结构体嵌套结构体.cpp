#include<iostream>
#include<string>
using namespace std;

//定义学生的结构体
struct Student 
{
	string name;
	int age;
	int score;

};

//定义老师的结构体
struct Teacher 
{
	int id;
	string name;
	int age;
	struct Student s;
};

int main()
{
	//结构体嵌套结构体的使用
	//创建老师

	Teacher t;
	t.id = 10086;
	t.name = "老王";
	t.age = 50;  //以上为老师属性
	t.s.age = 18;
	t.s.name = "小王";
	t.s.score = 99;  //以上为学生属性

	cout << "老师姓名：" << t.name << " 老师的编号：" << t.id << " 老师年龄：" << t.age
		<< " 学生姓名：" << t.s.name << " 学生年龄：" << t.s.age << " 学生分数：" << t.s.score << endl;

	system("pause");

	return 0;
}