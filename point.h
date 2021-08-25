#pragma once   //此句语句目的是为了防止头文件重复包含

#include<iostream>
using namespace std;

//点类
class Point
{
public:  //一般在一个成员函数设计的时候，只需要一个声明即可，所以把实现的部分删掉，声明部分补全

	//设置x
	void setX(int x);
	
	//获取x
	int getX();
	

	//设置y
	void setY(int y);
	
	//获取x
	int getY();
	

private:
	int m_X;
	int m_Y;

};
