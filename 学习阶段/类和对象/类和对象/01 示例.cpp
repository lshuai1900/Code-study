#include<iostream>
using namespace std;
#include<string>

//���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

class student
{
public://����Ȩ��

	//���е����Ժ���Ϊ ����ͳһ�� ��Ա
	//����  =  ��Ա���� ��Ա����
	//��Ϊ  =  ��Ա���� ��Ա����

	string name;

	string ID;

	void showstudent()
	{
		cout << "����:" << name << endl;
		cout << "ѧ��:" << ID << endl;
	}
	//��������ֵ
	void setname(string name)
	{
		name = name;
	}
};



int main01()
{
	string ID1;
	string name1;

	student a;
	cout << "������ѧ��ѧ�ţ�" << endl;
	
	cin >> ID1;
	a.ID = ID1;

	cout << "������ѧ��������" << endl;

	cin >> name1;
	a.name = name1;

	a.showstudent();

	student b;

	b.ID = 02;
	b.name = "����";

	b.showstudent();

	system("pause");
	return 0;
}