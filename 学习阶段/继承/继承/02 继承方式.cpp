//#include<iostream>
//using namespace std;
//
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 :public Base1
//{
//public:
//	void func()
//	{
//		m_A = 10;//����Ȩ��
//
//		m_B = 20;//����Ȩ��
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//}
//
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son2 :protected Base2
//{
//public:
//		void func()
//	{
//		m_A = 10;//����Ȩ��
//
//		m_B = 20;//����Ȩ��
//
//		//m_C = 20;
//	}
//	
//};
//
//void test02()
//{
//	Son2 s1;
//	//s1.m_A = 1000;
//}
//
//
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		m_A = 10;//˽��Ȩ��
//
//		m_B = 20;//˽��Ȩ��
//
//		//m_C = 20;
//	}
//
//};
//
//void test03()
//{
//	Son3 s3;
//	//s1.m_A = 1000; ����Son3�� ��Ϊ˽�г�Ա ������ʲ���
//	//s1.m_B = 1000; ����Son3�� ��Ϊ˽�г�Ա ������ʲ���
//}
//
//class GrandSon3:public Son3
//{
//public:
//	void func()
//	{
//		//m_A = 10;
//		//m_B = 10;
//	}
//};
//
//int main()
//{
//	
//
//
//
//	system("pause");
//	return 0;
//}