#include<iostream>
using namespace std;


class Person
{
public:
	Person()
	{
		cout << "PersonĬ�Ϲ��캯������" << endl;
	}
	Person(int age)
	{
		m_Age = age;
	}
	Person(const Person & p)
	{
		m_Age = p.m_Age;
	}

	~Person()
	{
		cout << "Person������������" << endl;
	}

	int m_Age;

};


//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test301()
{
	Person p1(20);
	Person p2(p1);

	cout << "p2�����䣺" << p2.m_Age << endl;
}

//2��ֵ���ݵķ�ʽ��������ֵ
void dowork(Person p)
{

}
void test302()
{
	Person p;
	dowork(p);
}

//3��ֵ��ʽ���ؾֲ�����
Person dowork02()
{
	Person p1;
	return p1;
}
void test303()
{
	Person p = dowork02();
}


int main3()
{
	//test301();
	//test302();
	test303();



	system("pause");
	return 0;
}