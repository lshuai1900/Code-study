/*#include<iostream>
using namespace std;


class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_Num = 0;
	}

	//����ǰ��++�����
	MyInteger& operator++()
	{
		m_Num++;
		return *this;
	}



	//���غ���++�����
	MyInteger operator++(int)
	{
		MyInteger temp = *this;

		m_Num++;

		return temp;
	}

private:


	int m_Num;
};

ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}


void test01()
{
	MyInteger myint;

	cout << ++myint << endl;
}

void test02()
{
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;
}

int main()
{

	test02();



	system("pause");
	return 0;
}*/