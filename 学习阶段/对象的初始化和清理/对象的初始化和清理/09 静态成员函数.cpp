#include<iostream>
using namespace std;

//��̬��Ա�����ص㣺
//1 ������һ������
//2 ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person
{
public:
	static void func()
	{
		m_A = 100;//��̬��Ա�������Է��� ��̬��Ա����
		//m_B = 200; ��̬��Ա���� �����Է��� �Ǿ�̬��Ա�������޷����ֵ������ĸ������
		cout << "static void func����" << endl;
	}
	static int m_A;
	int m_B;
private:

	//��̬��Ա����Ҳ���з���Ȩ�޵�
	static void func2()
	{
		cout << "func2����" << endl;
	}

};

void test901()
{
	//��̬��Ա�������ַ��ʷ�ʽ

	//1��ͨ������
	Person p1;
	p1.func();

	//2��ͨ������
	Person::func();


	//Person::func2(); //˽��Ȩ�޷��ʲ���

}

int main()
{
	test901();



	system("pause");
	return 0;
}