#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	Person(int age)
	{
		m_Age = age;
		cout << "Person���вι��캯������" << endl;
	}

	~Person()
	{
		
		cout << "Person���������캯������" << endl;
	}

	int m_Age;
};

void test501()
{
	Person p1(18);
	cout << "p1������Ϊ��" << p1.m_Age << endl;

	Person p2(p1);
	cout << "p2������Ϊ��" << p1.m_Age << endl;
}


int main()
{
	test501();


	system("pause");
	return 0;
}