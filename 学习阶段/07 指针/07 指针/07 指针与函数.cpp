#include<iostream>
using namespace std;

//ʵ������������
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap a=" << a << " b=" << b << endl;
}

void swap02(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "swap02 *p1=" << *p1 << " *p2=" << *p2 << endl;
}


int main7()
{
	
	//ֵ����
	int a = 10;
	int b = 20;
	cout << "����ǰa=" << a << " b=" << b << endl;
	//swap(a, b);
	
	//��ַ���� �������ĵ�ַ���ݸ����� �ı���ʵ�ε�ֵ
	swap02(&a, &b);
	cout << "������a=" << a << " b=" << b << endl;

	




	system("pause");
	return 0;
}
