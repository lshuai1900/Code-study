#include<iostream>
using namespace std;
#include<string>
#include"circle.h"
#include"point.h"

//class point
//{
//public:
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};
//
//
//
//class Circle
//{
//public:
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//
//	void setCenter(point center)
//	{
//		m_Center = center;
//	}
//	
//	point getCenter()
//	{
//		return m_Center;
//	}
//
//
//private:
//	int m_R;
//	point m_Center;
//};

void isInCircle(Circle& c, point& p)
{
	int distance =
	(c.getCenter().getX() - p.getX())* (c.getCenter().getX() - p.getX()) + 
	(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	

	int rDistance = c.getR() * c.getR();
	
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}


int main6()
{
	Circle c1;
	c1.setR(10);
	point center;
	center.setX(10);
	center.setY(0);
	c1.setCenter(center);


	point p;
	p.setX(10);
	p.setY(10);
	 
	isInCircle(c1, p);


	system("pause");
	return 0;
}