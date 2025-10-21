#include<iostream>
using namespace std;

//this指针是隐含每一个非静态成员函数内的一种指针
//this指针不需要定义，直接使用即可
//
//this指针的用途：
//•	当形参和成员变量同名时，可用this指针来区分
//•	在类的非静态成员函数中返回对象本身，可使用return* this


class Person
{
public:
	Person(int age)
	{
		//this指针指向 被调用的成员函数所属的对象
		this->age = age;
	}

	Person& PersonAddPerson(Person& P)
	{
		this->age += age;

		return *this;
	}

	int age;
};

//解决名称冲突
void test201()
{
	Person p1(18);
	cout << "p1的年龄：" << p1.age << endl;
}

//返回对象本身用*this
void test202()
{
	Person p1(10);
	Person p2(10);
	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);

	cout << "p2 age = " << p2.age << endl;
}

int main()
{
	//test201();
	test202();

	system("pause");
	return 0;
}