#include <iostream>
using namespace std;


int main2()
{

	int a = 0;
	cout << "�����������" << endl;
	cin >> a;
	cout << "������ķ���Ϊ��" << a << endl;

	if (a >= 600)
	{

		//cout << "һ��" << endl;

		if (a > 700) {
			cout << "�廪" << endl;
		}
		else if (a > 650) {
			cout << "����" << endl;
		}
		else {
			cout << "�˴�" << endl;
		}
	}
	else
	{
		if (a >= 500)
		{
			cout << "����" << endl;
		}
		else
		{
			if (a >= 300)
			{
				cout << "����" << endl;
			}
			else
				cout << "��ר" << endl;
		}
	}
	system("pause");
	return 0;

}