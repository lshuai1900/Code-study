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
//		m_A = 10;//公共权限
//
//		m_B = 20;//保护权限
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
//		m_A = 10;//保护权限
//
//		m_B = 20;//保护权限
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
//		m_A = 10;//私有权限
//
//		m_B = 20;//私有权限
//
//		//m_C = 20;
//	}
//
//};
//
//void test03()
//{
//	Son3 s3;
//	//s1.m_A = 1000; 到了Son3中 变为私有成员 类外访问不到
//	//s1.m_B = 1000; 到了Son3中 变为私有成员 类外访问不到
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