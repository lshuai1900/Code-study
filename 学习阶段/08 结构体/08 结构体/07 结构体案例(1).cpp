#include <iostream>
using namespace std;
#include <string>
#include<ctime>

struct student
{
	string sname;
	int score;
};

struct teacher
{
	string tname;
	struct student sArry[5];
}; 

void allocateSpace(struct teacher tArry[], int len) {

	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++) {
		tArry[i].tname = "teacher_";
		tArry[i].tname += nameSeed[i];

		for (int j = 0; j < 5; j++) {
			tArry[i].sArry[j].sname = "student_";
			tArry[i].sArry[j].sname += nameSeed[j];
			int randScore = rand() % 41 + 60; //60-100 �������
			tArry[i].sArry[j].score = randScore; 
		}
		
	}
}

void printinfo(struct teacher tArry[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "��ʦ������" << tArry[i].tname << endl;
		for (int j = 0; j < 5; j++) {
			cout << "\tѧ��������" << tArry[i].sArry[j].sname << "\t�ɼ���" << tArry[i].sArry[j].score << endl;
		}
	}
}

int main7()
{
	//��������� 
	srand((unsigned int)time(NULL));
	//����3����ʦ������
	struct teacher tArry[3];

	//ͨ��������3����ʦ�Լ�ÿ����ʦ��5��ѧ����ֵ
	int len = sizeof(tArry) / sizeof(tArry[0]);
	allocateSpace(tArry, len);

	printinfo(tArry,len);

	system("pause");
	return 0;
}
