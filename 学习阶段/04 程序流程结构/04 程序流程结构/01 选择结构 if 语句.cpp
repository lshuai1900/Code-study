#include <iostream>
using namespace std;


int main1() 
{

	int a = 0;
	cout << "�����������" << endl;
	cin >>  a ;
	cout << "������ķ���Ϊ��" << a << endl;

	if (a >= 600)
	{
	
		cout << "һ��" << endl;

	}
	else
	{
		if (a>= 500)
		{
			cout << "����" << endl;
		}
		else 
		{
			if (a>= 300)
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