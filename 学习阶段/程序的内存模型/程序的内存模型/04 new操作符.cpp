#include<iostream>
using namespace std;


//new�Ļ����﷨
int* func2()
{
	/*�ڶ���������������
	new���ص��� ���������͵�ָ��*/
	int* p = new int(10);

	return p;
}

void test01()
{
	int* p = func2();
	cout << *p << endl;
	cout << *p << endl;
	//�����������ɳ���Ա�����ٺ��ͷ�
	//������ͷŶ��������ݣ����ùؼ���delete

	delete p;
	cout << *p << endl;//�ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ��������ᱨ��
}

//�ڶ�������new��������
void test02()
{
	//����10���������ݵ����飬�ڶ���
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ���������
	delete[] arr;//�ͷ������ʱ����Ҫ����[]
}


int main()
{
	
	//test01();
	test02();


	system("pause");
	return 0;
}