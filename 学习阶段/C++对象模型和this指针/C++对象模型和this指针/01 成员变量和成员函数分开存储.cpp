#include<iostream>
using namespace std;

class Person
{
	int m_A;//�Ǿ�̬��Ա���� ������Ķ�����

	static int m_B;//��̬��Ա���� �������������
	
	
	void func()//�Ǿ�̬��Ա���� �������������
	{

	}

	static void func2(){}//�Ǿ�̬��Ա���� �������������
};

int Person::m_B = 0;

void test101()
{
	Person p;
	//�ն���ռ���ڴ�ռ�Ϊ��1
	//C++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "size of p =" << sizeof(p) << endl;
}

void test102()
{
	Person p;
	cout << "size of p =" << sizeof(p) << endl;
}

int main1()
{
	//test101();
	test102();


	system("pause");
	return 0;
}