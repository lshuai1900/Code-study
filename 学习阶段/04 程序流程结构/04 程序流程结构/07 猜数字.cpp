#include <iostream>
using namespace std;
#include<ctime>
int main7()
{
	

	srand((unsigned int)time(NULL));//�������������� ���ã�����ϵͳ��ǰʱ�����������
	//ϵͳ���������
	int num = rand() % 100 + 1; //����һ��0-99�������
	//cout << num << endl;
	int i = 0;

	while (i<5)
	{
//��Ҳ²�
	int vai = 0;
	cin >> vai;
	i = ++i;
	//�ж���Ҳ²�
	if (vai > num)
	{
		cout << "����" << endl;
	}
	else if (vai < num)
	{
		cout << "��С" << endl;
	}
	else
	{
		cout << "�¶���" << endl; break;//��������break���˳�ѭ��
	}
	

	//�¶� �˳���Ϸ

	//�´� ��ʾ�µĽ�������ǹ�С
	}
	
	cout << "��ʧ����" << endl;

	system("pause");
	return 0;

}