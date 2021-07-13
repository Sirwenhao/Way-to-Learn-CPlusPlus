#include<iostream>
using namespace std;
#include<string>

	//1、创建学生数据类型  学生信息包含：姓名、年龄、分数

struct Student  //结构体定义是关键字struct不能省略
{
	//成员列表

	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
}s3;  //;不能丢,顺便创建结构体变量s3,s3是在创建结构体时顺便创建的结构体变量，易被忽略

//2、通过学生数据类型，创建具体学生


int main()
{
	//2.1、struct Student s1
	struct Student s1;  //结构体变量创建时，关键字struct可以省略
	//给s1属性赋值，通过.访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	cout << "姓名：" << s1.name << " " << " 年龄：" << s1.age << " " << " 分数：" << s1.score << endl;


	//2.2、struct Student s2 = {...}
	struct Student s2 = { "李四", 19, 80 };
	cout << "姓名：" << s2.name << " " << " 年龄：" << s2.age << " " << " 分数：" << s2.score << endl;

	//2.3、在定义结构体的时候顺便创建结构体变量
	s3.name = "王五";
	s3.age = 20;
	s3.score = 60;
	cout << "姓名：" << s3.name << " " << " 年龄：" << s3.age << " " << " 分数：" << s3.score << endl;

	system("pause");

	return 0;
}