#include<iostream>
using namespace std;

int main() {

	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80},
	};

	string names[3] = { "����","����","����" };

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
			//cout << names[i] << "�ĵ�" << j + 1 << "�ſγɼ��ǣ�" << scores[i][j] << endl;
		}
		cout << names[i] << "���ܳɼ��ǣ�" << sum << endl;
	}

	system("pause");

	return 0;
}
