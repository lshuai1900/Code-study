#include <iostream>
using namespace std;


int main5()
{

	//swith���
	//��һ����Ӱ���
	//10~9 �����Ӱ
	//8~7 �ǳ���
	//6~5 һ��
	//5~0 ��Ƭ

	//if��switch����
	//Switchȱ�㣬�жϵ�ʱ��ֻ���������ͻ����ַ��ͣ�������һ������
	//Switch�ŵ㣬�ṹ������ִ��Ч�ʸ�

	int a = 0;
	cout << "�������Ӱ���֣�" << endl;
	cin >> a;
	cout << "������ķ���Ϊ��" << a << endl;

	switch (a) 
	{
	case 10:
		cout << "�����Ӱ" << endl; break;

	case 9:
		cout << "�����Ӱ" << endl; break;
	case 8:
		cout << "�ǳ��õ�Ӱ" << endl; break;
	case 7:
		cout << "�ǳ��õ�Ӱ" << endl; break;
	case 6:
		cout << "һ���Ӱ" << endl; break;
	case 5:
		cout << "һ���Ӱ" << endl; break;
	default:
		cout << "��Ƭ" << endl; break;
	}

	

	system("pause");
	return 0;

}