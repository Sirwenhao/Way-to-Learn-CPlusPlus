#pragma once
#include<iostream>
using namespace std;
#include"point.h" //此句必须写上，因为在此文件中的圆类中包含了point类

//圆类
class Circle
{
public:

	//设置半径
	void setR(int r);
	
	//获取半径
	int getR();
	

	//设置圆心
	void setCenter(Point center);
	
	//获取圆心
	Point getCenter();
	
private:
	int m_R;

	//在类中可以让另一个类 作为本类中的成员
	Point m_Center;
};
