#include <iostream>
using namespace std;
#include <string>

struct Student {
	string name;
	int age;
	int score;
};
//��ӡѧ����Ϣ
void printstudent1(struct Student s) //ֵ����
{
	s.age = 25;
	s.name = "����";
	s.score = 99;
	cout << "ֵ����   ������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;
}

void printstudent2(struct Student* p) //��ַ����
{
	p->age = 30;
	p->name = "����";
	p->score = 59;
	cout << "��ַ����   ������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
}



int main5()
{
	//�ṹ������������
	//��ѧ�����뵽һ�������У���ӡѧ��������Ϣ

	Student s = { "����",18,85 };

	//printstudent1(s);

	printstudent2(&s);
	cout << "main������  ������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;



	system("pause");
	return 0;
}
