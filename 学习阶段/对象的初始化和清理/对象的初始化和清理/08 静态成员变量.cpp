#include<iostream>
using namespace std;

class Person
{
public:

	//所有对象都共享同一份数据
	//编译阶段就分配内存
	//类内声明，类外初始化操作
	static int m_A;

	//静态成员变量也是有访问权限的
private:
	static int m_B;
};

int Person::m_A = 100;
int Person::m_B = 100;


void test801()
{
	Person p;
	cout << p.m_A << endl;

	Person p2;
	p2.m_A = 200;

	cout << p.m_A << endl;
}

void test802()
{
	/*Person p;
	cout << p.m_A << endl;*/


	cout << Person::m_A << endl;
	//cout << Person::m_B << endl;例外访问不到私有静态成员变量
}

int main8()
{
	//test801();
	test802();

	system("pause");
	return 0;
}