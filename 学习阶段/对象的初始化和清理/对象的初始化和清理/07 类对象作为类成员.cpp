#include<iostream>
using namespace std;
#include<string>

class Phone
{
public:
	Phone(string pName)
	{
		cout << "�ֻ��Ĺ��캯��" << endl;
		m_Pname = pName;
	}

	string m_Pname;

};


class Person
{
public:
	Person(string name, string pName) :m_Name(name),m_Phone(pName)
	{
		cout << "Person�Ĺ��캯��" << endl;
	}

	string m_Name;
	Phone m_Phone;
};

void test701()
{
	Person p("����", "ƻ��MAX");

	cout << p.m_Name << "���ţ�" << p.m_Phone.m_Pname << endl;
}


int main7()
{
	test701();


	system("pause");
	return 0;
}