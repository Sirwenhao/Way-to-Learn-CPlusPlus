#include<iostream>
#include<string>
using namespace std;

//定义学生结构体
struct Student
{
    string name;
    int age;
    int score;
};

int main()
{
    //结构体做函数参数
    //将学生传入到一个参数中，打印学生身上的所有信息

    //创建结构体变量
    struct Student s;
    s.name =  "张三";
    s.age  = 20;
    s.score = 100; 

    //再main函数中输出
    cout << "姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;

    system("pause");

    return 0;
}