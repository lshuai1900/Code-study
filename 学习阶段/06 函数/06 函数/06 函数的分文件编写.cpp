#include<iostream>
using namespace std;
#include"swap.h"

//�����ķ��ļ���д
//ʵ���������ֵĽ���

//void swap(int a, int b);//��������
//void swap(int a, int b)//��������
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "������a = " << a << endl;
//	cout << "������b = " << b << endl;
//}
	//������׺��Ϊ.h��ͷ�ļ� 
	//������׺��Ϊ.cpp��Դ�ļ�
	//��ͷ�ļ���д����������
	//��Դ�ļ���д�����Ķ���

int main() {

	int a = 10;
	int b = 20;

	swap(a, b);

	system("pause");
	return 0;
}


