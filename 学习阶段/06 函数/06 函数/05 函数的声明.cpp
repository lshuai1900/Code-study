#include<iostream>
using namespace std;

//��������������������д��Σ�������ֻ��дһ��
int max(int a, int b);


int main5() {

	int a = 10;	
	int b = 20;

	cout << "max = " << max(a, b) << endl;


	system("pause");
	return 0;
}


int max(int a, int b)
{
	return a > b ? a : b;//a>b����a ���򷵻�b
}
