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
	// struct �� class ����
	// struct Ĭ��Ȩ���� ���� public
	// class  Ĭ��Ȩ���� ˽�� private

	//c1 C1;
	//C1.m_A = 100;

	c2 C2;
	C2.m_A = 100;

	system("pause");
	return 0;
}