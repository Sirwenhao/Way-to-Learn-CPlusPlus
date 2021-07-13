#include<iostream>
using namespace std;
#include<string>
//结构体数组
	//1、定义结构体
struct Student
{
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
};
int main()
{
	
	//2、创建结构体数组
	struct Student stuArray[3] =
	{
		{"张三",18,100} ,
		{"李四",19,90} ,
		{"王五",20,80}
	};

	//3、给结构体中的数组元素赋值
	stuArray[2].name = "赵六";
	stuArray[2].age = 24;
	stuArray[2].score = 97;

	//4、遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << " 姓名： " << stuArray[i].name 
			 << " 年龄： " << stuArray[i].age 
			 << " 分数： " << stuArray[i].score << endl;
	}

	system("pause");

	return 0;
}