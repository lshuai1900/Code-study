#include<iostream>
using namespace std;


class Person
{
public:
	Person()
	{
		cout << "Person默认构造函数调用" << endl;
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
		cout << "Person析构函数调用" << endl;
	}

	int m_Age;

};


//1、使用一个已经创建完毕的对象来初始化一个新对象
void test301()
{
	Person p1(20);
	Person p2(p1);

	cout << "p2的年龄：" << p2.m_Age << endl;
}

//2、值传递的方式给函数传值
void dowork(Person p)
{

}
void test302()
{
	Person p;
	dowork(p);
}

//3、值方式返回局部对象
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