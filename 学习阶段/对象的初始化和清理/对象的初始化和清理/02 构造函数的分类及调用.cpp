#include<iostream>
using namespace std;

//���ղ������ࣺ�޲ι��죨Ĭ�Ϲ��캯�������вι���
//�������ͷ��ࣺ��ͨ���캯�� ��������
class Person
{
public:
	//���캯��
	Person()
	{
		cout << "Person���޲ι��캯������" << endl;
	}

	Person(int a)
	{
		age = a;
		cout << "Person���вι��캯������" << endl;
	}
	//�������캯��
	Person(const Person &p)
	{
		age = p.age;//����������������е����ԣ�������������
		cout << "Person�Ŀ������캯������" << endl;
	}

	~Person()
	{
		cout << "Person��������������" << endl;
	}
	int age = 0;
};

void test02()
{
	//1�����ŷ�
	//Person p;//Ĭ�Ϲ��캯������
	//Person p2(10);//�вι��캯��
	//Person p3(p2);
	//ע������
	//����Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ��()
	// ��Ϊ�������д��룬����������Ϊ��һ��������������������Ϊ�ڴ�������
	// Person p1();
	// 
	// 
	//cout << "p2�����䣺" << p2.age << endl;
	//cout << "p3�����䣺" << p3.age << endl;

	//2����ʾ��
	Person p1;
	Person p2 = Person(10);//�вι���
	Person p3 = Person(p2);//��������

	//Person(10);//�������� �ص㣺��ǰ��Ϊִ�н�����ϵͳ������������������
	//cout << "AAAAA" << endl;
	//ע������
	//��Ҫ���ÿ������캯�� ��ʼ���������� ����������ΪPerson��p3�� === Person p3; ���������
	//Person(p3);


	//3����ʽת����
	Person p4 = 10;//�൱�� д�� Person p4 = Person(10); �вι���
	Person p5 = p4;//��������
}


int main2()
{
	test02();



	system("pause");
	return 0;
}