#include<iostream>
using namespace std;


//��������

//ֵ����
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	/*cout << "Swap01 a=" << a << endl;
	cout << "Swap01 b=" << b << endl;*/
}

//��ַ����
void mySwap02(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//���ô���
void mySwap03(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}


int main3()
{
	int a = 10;
	int b = 20;
	//mySwap01(a, b);//ֵ���ݣ��ββ�������ʵ��

	//mySwap02(&a, &b//��ַ���ݣ��βλ�����ʵ��

	mySwap03(a, b);//���ô��ݣ��βλ�����ʵ��

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	

	system("pause");
	return 0;
}