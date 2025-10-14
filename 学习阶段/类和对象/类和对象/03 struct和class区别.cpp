#include<iostream>
using namespace std;

class c1
{
	
	int m_A;
};

struct c2
{

	int m_A;
};


int main3()
{
	// struct 和 class 区别
	// struct 默认权限是 公共 public
	// class  默认权限是 私有 private

	//c1 C1;
	//C1.m_A = 100;

	c2 C2;
	C2.m_A = 100;

	system("pause");
	return 0;
}