#include <iostream>
using namespace std;
#include <string>


struct Student {
	string name;
	int age;
	int score;
};


struct Teacher {
	int id;
	string name;
	int age;
	Student stu; //�ṹ��Ƕ�׽ṹ��
};

int main4()
{
	Teacher tea;
	tea.id = 1001;
	tea.age = 37;
	tea.name = "����ʦ";
	tea.stu.name = "����";
	tea.stu.age = 18;
	tea.stu.score = 100;

	cout << "��ʦ������" << tea.name << "��ʦ���䣺" << tea.age << "��ʦ����ѧ��������" << tea.stu.name << endl;


	system("pause");
	return 0;
}
