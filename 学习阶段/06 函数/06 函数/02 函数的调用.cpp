#include<iostream>
using namespace std;
//�����Ķ���
//����ֵ���� ������(�����б�){������}

int add(int a, int b)
{
	int sum = a + b;
	return sum;
}



int main2() {
	//main�����ĵ���add����
	int num1 = 10;
	int num2 = 20;

	int result = add(num1, num2);

	cout << "result = " << result << endl;

	system("pause");

	return 0;
}
