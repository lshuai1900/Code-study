#include<iostream>
using namespace std;

class Person
{
public:

	//���ж��󶼹���ͬһ������
	//����׶ξͷ����ڴ�
	//���������������ʼ������
	static int m_A;

	//��̬��Ա����Ҳ���з���Ȩ�޵�
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
	//cout << Person::m_B << endl;������ʲ���˽�о�̬��Ա����
}

int main8()
{
	//test801();
	test802();

	system("pause");
	return 0;
}