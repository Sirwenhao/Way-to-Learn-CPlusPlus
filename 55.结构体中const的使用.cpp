#include<iostream>
#include<string>
using namespace std;

//const的使用场景

struct Student
{
	string name;
	int age;
	int score;
};

//将函数的形参改为指针，可以减少内存空间，而且不会复制出新的副本来
void printStudent(Student *s)
{
	//s->age = 150; //加入const之后，一旦有修改的操作就会报错，可以防止我们误操作 
	cout << "姓名：" << s->name << " 年龄：" << s->age << " 得分：" << s->score << endl;
}

int main()
{
	//创建结构体变量

	struct Student s = {"张三",15,88};

	//通过函数打印结构体

	printStudent(&s);

	system("pause");

	return 0;
}