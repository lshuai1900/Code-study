#include <iostream>
using namespace std;
#include <string>

//�ṹ��ָ��
//���ò�����->����ͨ���ṹ��ָ����ʽṹ������

struct Student {
	string name;
	int age;
	int score;
};


int main3()
{
	//����ѧ���ṹ�����
	struct Student stu = { "����", 20, 100 };
	
	//ͨ��ָ��ָ��ṹ�����
	struct Student* p = &stu;

	//ͨ��ָ����ʽṹ������е�����
	cout << "����:" << p->name << "����:" << p->age << " ����:" << p->score << endl;
	//���ò�����->����ͨ���ṹ��ָ����ʽṹ������

	system("pause");
	return 0;
}
