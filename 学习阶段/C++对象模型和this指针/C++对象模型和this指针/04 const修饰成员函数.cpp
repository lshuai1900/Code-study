#include<iostream>
using namespace std;

class Person
{
public:

	//thisָ��ı�����һ��ָ�볣����ָ���ָ�򲻿��޸�
	//�������ָ��ָ���ֵҲ�������޸ģ���Ҫ����������
	//�����޸�ָ���ָ�� Person* const this;
	void showPerson() const//����const����
	{
		//const Type* const pointer;
		//this = NULL; //�����޸�ָ���ָ�� Person* const this;
		//this->mA = 100; //����thisָ��ָ��Ķ���������ǿ����޸ĵ�

		//const���γ�Ա��������ʾָ��ָ����ڴ�ռ�����ݲ����޸ģ�����mutable���εı���

		this->m_B = 100;
		
	}

	void func()
	{
		m_A = 100;
	}
	int m_A;
	mutable int m_B;//�ӹؼ���mutable �����������ʹ�ڳ������У�Ҳ�����޸����ֵ
};




void test401()
{
	Person p;
	p.showPerson();
}

//������
void test402()
{
	const Person p;
	//p.m_A = 100;
	p.m_B = 100;//m_B ������ֵ���ڳ�������Ҳ�����޸�

	p.showPerson();
	//p.func(); //������ �����Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����
}


int main()
{
	



	system("pause");
	return 0;
}