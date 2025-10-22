#include<iostream>
using namespace std;


class Person
{
public:

	Person(int age)
	{
		m_Age = new int(age);
	}

	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}

	int* m_Age;
};

void test01()
{
	Person p1(18);

	Person p2(20);

	p2 = p1;

	cout << "p1 age = " << *p1.m_Age << endl;
	cout << "p2 age = " << *p2.m_Age << endl;
}


int main()
{

	test01();



	system("pause");
	return 0;
}