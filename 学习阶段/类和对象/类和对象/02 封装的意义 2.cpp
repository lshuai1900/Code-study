#include<iostream>
using namespace std;

//����Ȩ��
//����Ȩ�� pubil			��Ա ���ڿ��Է���   ������Է���
//����Ȩ�� protected		��Ա ���ڿ��Է���   ���ⲻ���Է���  ���ӿ��Է��ʸ����еı�������
//˽��Ȩ�� private		��Ա ���ڿ��Է���   ���ⲻ���Է���  ���Ӳ����Է��ʸ����еı�������

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
		m_Name = "����";
		m_Car = "��������";
		m_Password = 123456;
	}

};


int main2()
{
	person p1;

	p1.m_Name = "����";
	






	system("pause");
	return 0;
}