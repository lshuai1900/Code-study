#include<iostream>
using namespace std;

int main2()
{
	//����ͳ�������������ڴ��еĳ���
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << sizeof(arr[0]) << endl; 
	cout << arr[0] << endl;
	cout << "�����е�Ԫ�ظ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;

	//����ͨ���������鿴�����׵�ַ
	
	cout << "������׵�ַΪ��" << (int)arr << endl;
	cout << "�����һ��Ԫ�ص��׵�ַΪ��" << (int)&arr[1] << endl;


	//�������ǲ����޸ĵģ������Խ��и�ֵ����
	//���� arr = arr + 1; //����д��
	system("pause");
	return 0;
}