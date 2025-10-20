#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	Person(int age)
	{
		m_Age = age;
		cout << "Person的有参构造函数调用" << endl;
	}

	~Person()
	{
		
		cout << "Person的析构构造函数调用" << endl;
	}

	int m_Age;
};

void test501()
{
	Person p1(18);
	cout << "p1的年龄为：" << p1.m_Age << endl;

	Person p2(p1);
	cout << "p2的年龄为：" << p1.m_Age << endl;
}


int main()
{
	test501();


	system("pause");
	return 0;
}