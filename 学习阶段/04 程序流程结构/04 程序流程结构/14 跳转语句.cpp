#include <iostream>
using namespace std;

int main14()
{

	//break��ʹ��ʱ��

	//1.��switch�����
	/*cout << "��ѡ�񸱱��Ѷ�:" << endl;
	cout << "��ͨ" << endl;
	cout << "�е�" << endl;
	cout << "����" << endl;

	int select = 0;

	cin >> select;
	switch (select)
	{
		case 1:
		cout << "������ͨ����" << endl;
		break;
		case 2:
		cout << "�����еȸ���" << endl;
		break;
		case 3:
		cout << "�������Ѹ���" << endl;
		break;
		default:
		break;
	}*/


	//2.��ѭ�������

	/*for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		cout << "��ǰ����Ϊ:" << i << endl;
	}*/


	//3.������ĳ������ʱ������ѭ��

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break; //�����������������ѭ��
			}
			cout << "*";
		}
		cout << endl;
	}


	system("pause");
	return 0;

}