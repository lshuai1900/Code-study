#include<iostream>
using namespace std;

//�﷨���������� &���� = ԭ��



int main2()
{
	int a = 10;
	
	//1�����ñ���Ҫ��ʼ��
	//int& b; 
	int& b = a;
	//2������һ����ʼ��֮��Ͳ��ܸ�����
	int c = 20;
	b = c;

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl;

	system("pause");
	return 0;
}