#include <iostream>
using namespace std;
#include <string>


struct Student {
	string name;
	int age;
	int score;
};

//ͨ��ѧ�����ʹ�������ѧ��
int main()
{
	struct Student stuarr[3]=
	{
		{"����",18,100},
		{"����",19,90},
		{"����",20,80 }
	};

	stuarr[2].name = "����";
	stuarr[2].age = 21;
	stuarr[2].score = 70;

	for (int i = 0; i < 3; i++)
	{
		cout << "������" << stuarr[i].name << " ���䣺" << stuarr[i].age << " ������" << stuarr[i].score << endl;
	}


	system("pause");
	return 0;
}
