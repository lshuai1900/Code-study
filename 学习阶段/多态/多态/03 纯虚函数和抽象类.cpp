//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//
//	//���麯��
//	/*�������ص㣺
//	1���޷�ʵ��������
//	2�����������д�������еĴ��麯��������Ҳ���ڳ�����*/
//
//	virtual void func() = 0;
//
//};
//
//class Son :public Base
//{
//public:
//
//	virtual void func()
//	{
//		cout << "func��������" << endl;
//	}
//};
//
//void test01()
//{
//	//Son s;//���������д�������еĴ��麯��������Ҳ���ڳ�����
//	Base* base = new Son;
//	base->func();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}