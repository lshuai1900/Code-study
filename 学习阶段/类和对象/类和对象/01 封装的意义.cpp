#include<iostream>
using namespace std;

const double PI = 3.14;

//���һ��Բ�࣬��Բ���ܳ�

//class �������һ���࣬���������ŵľ���������
class Circle//Circl�������ƣ�������������
{
	//����Ȩ��
	//����Ȩ��
public:

	//����
	//�뾶
	int m_r;
	//��Ϊ
	//��ȡԲ���ܳ�
	double caclculateZC()
	{
		return 2 * PI * m_r;
	}
};


int main1()
{
	//ͨ��Բ�� ���������Բ������
	//ʵ���� ��ͨ��һ���� ����һ������Ĺ��̣�
	Circle c1;

	//��Բ��������Խ��и�ֵ
	c1.m_r = 10;

	cout << "Բ���ܳ�=" << c1.caclculateZC() << endl;

	system("pause");
	return 0;
}