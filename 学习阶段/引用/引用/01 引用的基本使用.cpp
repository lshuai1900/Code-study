#include<iostream>
using namespace std;

//�﷨���������� &���� = ԭ��



int main1()
{
	int a = 10;
	//��������
	int& b = a;
	cout << a << endl;
	cout << b << endl;
	b = 20;
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}