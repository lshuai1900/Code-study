#include<iostream>
using namespace std;

//ȫ�ֱ���
int g_a = 10;
int g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;

int main1()
{

	//ȫ����

	//ȫ�ֱ�������̬����������

	//������ͨ�ֲ�����
	int a = 10;
	int b = 10;

	cout << "�ֲ�����a�ĵ�ַ��" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַ��" << (int)&b << endl;
	
	cout << "ȫ�ֱ���g_a�ĵ�ַ��" << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַ��" << (int)&g_b << endl;

	//��̬���� ����ͨ����ǰ���static�����ھ�̬����
	static int s_a = 10;
	static int s_b = 10;
	
	cout << "��̬����s_a�ĵ�ַ��" << (int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַ��" << (int)&s_b << endl;

	//����

	//�ַ�������
	cout << "�ַ��������ĵ�ַ��" << (int)&"hello world" << endl;

	//const���εĳ���
	//const���ε�ȫ�ֱ�����ȫ�ֳ�����
	cout << "ȫ�ֳ���c_g_a�ĵ�ַ��" << (int)&c_g_a << endl;
	cout << "ȫ�ֳ���c_g_b�ĵ�ַ��" << (int)&c_g_b << endl;

	//const���εľֲ�����
	int c_l_a = 10;
	int c_l_b = 10;

	cout << "�ֲ�����c_l_a�ĵ�ַ��" << (int)&c_l_a << endl;
	cout << "�ֲ�����c_l_b�ĵ�ַ��" << (int)&c_l_b << endl;

	system("pause");
	return 0;
}