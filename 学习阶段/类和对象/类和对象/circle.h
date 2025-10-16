#pragma once
#include<iostream>
using namespace std;
#include"point.h"

class Circle
{
public:
	void setR(int r);

	int getR();

	
	void setCenter(point center);


	point getCenter();
	


private:
	int m_R;
	point m_Center;
};