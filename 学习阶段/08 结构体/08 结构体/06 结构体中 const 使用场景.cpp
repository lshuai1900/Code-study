#include <iostream>
using namespace std;
#include <string>

struct student
{
	string name;
	int age;
	int score;
};
//�������е��βθ�Ϊָ�����ͣ����Լ����ڴ�ռ�
void printStudent(const student *stu) //const����stu ֻ�ܶ����ܸ�
{
	//stu->age = 20; 
	cout << "������" << stu->name << " ���䣺" << stu->age << " ������" << stu->score << endl;
}


int main6()
{
	student stu = { "����",18,100 };

	//ͨ��������ӡ�ṹ����Ϣ
	printStudent(&stu);
	cout << "main ������" << stu.name << " ���䣺" << stu.age << " ������" << stu.score << endl;

	system("pause");
	return 0;
}
