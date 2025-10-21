#include<iostream>
using namespace std;
#include<string>

class Phone
{
public:
	Phone(string pName)
	{
		cout << "手机的构造函数" << endl;
		m_Pname = pName;
	}

	string m_Pname;

};


class Person
{
public:
	Person(string name, string pName) :m_Name(name),m_Phone(pName)
	{
		cout << "Person的构造函数" << endl;
	}

	string m_Name;
	Phone m_Phone;
};

void test701()
{
	Person p("张三", "苹果MAX");

	cout << p.m_Name << "拿着：" << p.m_Phone.m_Pname << endl;
}


int main7()
{
	test701();


	system("pause");
	return 0;
}