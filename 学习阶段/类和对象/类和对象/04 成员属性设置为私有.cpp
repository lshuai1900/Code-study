#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

//��Ա��������˽��
//1�������Լ����ƶ�д
//2������д���Լ��������Ч��

//����
class person1
{
public:
	void setName(string name)
	{
		m_Name = name;
	}
	//��ȡ����
	string getName()
	{
		return m_Name;
	}

	//��ȡ����
	int getAge()
	{
		return m_Age;
	}

	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "�������������޸�ʧ��" << endl;
			return;
		}
	}

	void setIdol(string idol)
	{
		m_Idol = idol;
	}

private:
	string m_Name;//�ɶ���д

	int m_Age = 18;//ֻ��

	string m_Idol;//ֻд
};


int main4()
{
	person1 p1;

	p1.setName("����");
	cout << "������" << p1.getName() << endl;

	p1.setAge(120);
	p1.getAge();
	cout << "���䣺" << p1.getAge() << endl;

	p1.setIdol("С��");
	//cout << "ouxiang:" << p1.getIdol() << endl; ֻд״̬ �����ʲ���

	system("pause");
	return 0;
}