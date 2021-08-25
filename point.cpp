#include"point.h"

//点类


//设置x
void Point::setX(int x)//都要加上Point::，讲明是Point作用域下的成员函数，否则会报错
{
	m_X = x;
}
//获取x
int Point::getX()
{
	return m_X;
}

//设置y
void Point::setY(int y)
{
	m_Y = y;
}
//获取x
int Point::getY()
{
	return m_Y;
}


