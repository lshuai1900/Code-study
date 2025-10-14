#include<iostream>
using namespace std;

//访问权限
//公共权限 pubil			成员 类内可以访问   类外可以访问
//保护权限 protected		成员 类内可以访问   类外不可以访问  儿子可以访问父亲中的保护内容
//私有权限 private		成员 类内可以访问   类外不可以访问  儿子不可以访问父亲中的保护内容

class person
{
public:

	string m_Name;

protected:

	string m_Car;

private:

	int m_Password;

public:
	void func()
	{
		m_Name = "张三";
		m_Car = "兰博基尼";
		m_Password = 123456;
	}

};


int main2()
{
	person p1;

	p1.m_Name = "李四";
	






	system("pause");
	return 0;
}