#include<iostream>
using namespace std;

//�����ĳ�����ʽ

//�޲��޷�
void test01()//������û�в�������������û��return
{
	cout << "test01��������" << endl;
}

//�в��޷�
void test02(int a)//�������в�������������û��return
{
	cout << "test02��������" << endl;
	cout << "a = " << a << endl;
}


//�޲��з�
int test03()//������û�в���������������return
{
	cout << "test03��������" << endl;
	return 100;
}

//�в��з�
int test04(int a)//�������в���������������return
{
	cout << "test04��������" << endl;
	cout << "a = " << a << endl;
	return a;
}




int main4() {
	
	//�޲��޷���������
	test01();
	
	//�в��޷���������
	test02(100);//��Ҫ����ʵ�θ��β�

	//�޲��з���������
	int num1 = test03();
		cout << "num1 = " << num1 << endl;

	//�޲��з���������
	int num2 = test04(200);
	cout << "num2 = " << num2 << endl;


	system("pause");
	return 0;
}
