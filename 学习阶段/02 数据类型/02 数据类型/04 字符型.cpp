#include <iostream>
using namespace std;

int main4()
{
	//1���ַ��ͱ���������ʽ
	char ch = 'a';
	cout << ch << endl;

	//2���ַ��ͱ�����ռ�ڴ��С 1
	cout << "char �ַ��ͱ�����ռ�ڴ棺" << sizeof(char) << endl;

	//3���ַ��ͱ�����������
	//ch = "a"; //���󣬲�������˫����
	//ch = 'abcde'; //���󣬵�������ֻ������һ���ַ�
	//char ch2 = 'b'; �������ȷ��д��

	//4���ַ��ͱ�����ӦASCII����	a-97		A-65 
	cout << (int)ch << endl;

	system("pause");

	return 0;
}