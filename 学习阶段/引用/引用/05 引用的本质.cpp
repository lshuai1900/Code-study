#include<iostream>
using namespace std;

//���õı�����C++�ڲ�ʵ����һ��ָ�볣��


//�ڲ����������ã�ת��Ϊ��int* const ref = &a;
void func(int& ref)
{
	ref = 100;//ref�����ã��Զ�������ת��Ϊ��*ref = 20;
}


int main5()
{
	int a = 10;

	int& ref = a;
	ref = 20;//�ڲ�����ref�����ã��Զ�������ת��Ϊ��*ref = 20;

	cout << "a=" << a << endl;
	cout << "ref=" << ref << endl;

	func(a);



	return 0;
}