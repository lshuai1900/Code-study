//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//
//	//纯虚函数
//	/*抽象类特点：
//	1、无法实例化对象
//	2、子类必须重写抽象类中的纯虚函数，否则也属于抽象类*/
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
//		cout << "func函数调用" << endl;
//	}
//};
//
//void test01()
//{
//	//Son s;//子类必须重写抽象类中的纯虚函数，否则也属于抽象类
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