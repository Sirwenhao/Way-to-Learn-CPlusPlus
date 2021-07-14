#include<iostream>
#include<string>
using namespace std;

//结构体指针
//定义学生结构体
struct Student
{
	string name;
	int age;
	int score;
};

int main()
{

	//1、创建学生结构体变量
	struct Student s = {"张三" ,18,100};

	//2、通过指针指向结构体
	//int* p = &s;  //等号左右侧两个指针是不兼容的
	struct Student* p = &s;

	//3、通过指针访问结构体变量中的数据
	//通过结构体指针 访问结构体中的属性，需要利用 ' -> '
	//s.name;  //不使用指针的情况下，可以使用.去访问指针的变量，如此句

	cout << "年龄为：" << p->age << endl;
	cout << "姓名为：" << p->name << endl;
	cout << "分数为：" << p->score << endl;

	p->score;  // 使用指针的方法

	system("pause"); 

	return 0;
}