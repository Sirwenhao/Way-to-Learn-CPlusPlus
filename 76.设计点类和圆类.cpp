#include<iostream>
using namespace std;

//点和圆的关系案例

//点类
class Point 
{
public:

	//设置x
	void setX(int x)
	{
		m_X = x;
	}
	//获取x
	int getX()
	{
		return m_X;
	}

	//设置y
	void setY(int y)
	{
		m_Y = y;
	}
	//获取x
	int getY()
	{
		return m_Y;
	}

private:
	int m_X;
	int m_Y;

};
 
//圆类
class Circle 
{
public:

	//设置半径
	void setR(int r)
	{
		m_R = r;
	}
	//获取半径
	int getR()
	{
		return m_R;
	}

	//设置圆心
	void setCenter(Point center)
	{
		m_Center = center;
	}
	//获取圆心
	Point getCenter()
	{
		return m_Center;
	}
private:
	int m_R;

	Point m_Center;
};

//通过全局函数判断点和圆的关系
void isIncircle(Circle &c, Point &p)
{
	//先计算两点之间距离的平方
	int distanceSquare = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	//再计算半径的平方
	int rSquare = c.getR() * c.getR();

	//判断上述两者的大小关系
	if (distanceSquare == rSquare)
	{
		cout << "点在圆上" << endl;
	}
	else if (distanceSquare < rSquare)
	{
		cout << "在圆内" << endl;
	}
	else
	{
		cout << "在圆外" << endl;
	}

}

int main()
{
	//创建圆
	Circle c1;
	c1.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c1.setCenter(center);

	//创建点
	Point p1;
	p1.setX(10);
	p1.setY(10);

	//判断关系
	isIncircle(c1, p1);


	system("pause");

	return 0;
}