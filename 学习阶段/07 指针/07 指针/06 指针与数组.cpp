#include<iostream>
using namespace std;

int main6()
{
	// ָ��������
	// ����ָ����������е�Ԫ��
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//int* p = arr; // arr��������ʾ������Ԫ�صĵ�ַ

	//cout << *p << endl; // 1

	//p++; // ָ������ƶ�4���ֽ�
	//cout << *p << endl; // 2

	cout << "����ָ����������е�Ԫ��" << endl;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr; // arr��������ʾ������Ԫ�صĵ�ַ
	for (int i = 0; i < 10; i++)
	{
		cout << *p << " " ;

		p++;
		
	}


	system("pause");
	return 0;
}
