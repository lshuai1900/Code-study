#include<iostream>
using namespace std;

int main1()
{
	//����ָ��
	int a = 10;
	//ָ�붨����﷨���������� * ָ�������
	int* p; //&ȡ��ַ�����
	//��ָ��ָ�����a�ĵ�ַ
	p = &a;//&ȡ��ַ�����
	cout << "a = " << (int) & a << endl;
	cout << "a = " << (int)p << endl;

	//ʹ��ָ��
	//����ͨ�������������*��ʹ��ָ��ָ��ı���

	cout << "*p = " << *p << endl;


	system("pause");
	return 0;
}
