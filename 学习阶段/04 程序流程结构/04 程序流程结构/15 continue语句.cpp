#include <iostream>
using namespace std;

int main15()
{
	// continue������ڽ�������ѭ����������һ��ѭ��
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			continue; // ��������ѭ����������һ��ѭ��
		}
		cout << i << endl; // �������
	}
	
	

	system("pause");
	return 0;

}