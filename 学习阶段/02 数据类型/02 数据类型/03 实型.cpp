#include <iostream>
using namespace std;

int main3()
{

	//1�������� float  2��˫���� double
	// Ĭ������� ���һ��С��������ʾ6λ��Ч����

	float f1 = 3.146f;//�����С�������һ��f
	
	cout << "f1=" << f1 << endl;

	double d1 = 3.6762;
	cout << "d1=" << d1 << endl;

	cout << "float ռ�õ��ڴ�ռ�Ϊ��" << sizeof(float) << endl;	//4�ֽ�

	cout << "double ռ�õ��ڴ�ռ�Ϊ��" << sizeof(double) << endl;	//8�ֽ�

	//��ѧ������
	float f2 = 3e2;	//3*10^2;
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2;//3*0.1^2
	cout << "f3" << f3 << endl;


	system("pause");

	return 0;
}