#include<iostream>
using namespace std;

int main3() {
	////ǰ�õ���
	//int a = 10;
	//++a; //ǰ�õ���
	//cout << "a=" << a << endl;

	////���õ���
	//int b = 10;
	//b++; //��ʹ�ú����
	//cout << "b=" << b << endl;

	int a2 = 10;
	int b2 = a2++ * 10;
	cout << "a2=" << a2 << endl; //11
	cout << "b2=" << b2 << endl; //11
	//ǰ�õ��������õ�������
	//ǰ�õ������Ȱѱ��������1��Ȼ���ٲ�������
	//���õ������Ȱѱ�������������㣬Ȼ���ٰѱ��������1

	system("pause");
	return 0;

}