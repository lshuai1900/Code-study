#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}

	Person(int age,int height)
	{
		m_Age = age;
		m_Height = new int(height);
		cout << "Person���вι��캯������" << endl;
	}

	Person(const Person & p)
	{
		cout << "Person ������������" << endl;
		m_Age = p.m_Age;

		m_Height = new int(*p.m_Height);
	}

	~Person()
	{
		//�������� �����������������ͷŲ���
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person���������캯������" << endl;
	}

	int m_Age;
	int* m_Height;
};

void test501()
{
	Person p1(18, 160);
	cout << "p1������Ϊ��" << p1.m_Age << "��ߣ�" << *p1.m_Height << endl;

	Person p2(p1);
	cout << "p2������Ϊ��" << p1.m_Age << "��ߣ�" << *p1.m_Height << endl;
}


int main5()
{
	test501();


	system("pause");
	return 0;
}