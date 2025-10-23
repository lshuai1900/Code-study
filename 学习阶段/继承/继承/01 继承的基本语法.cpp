//#include<iostream>
//using namespace std;
//
//
//
//
////继承的好处： == 可以减少重复的代码 ==
////class A : public B;
////A 类称为子类 或 派生类
////B 类称为父类 或 基类
////public 继承方式
//// 
////派生类中的成员，包含两大部分：
////一类是从基类继承过来的，一类是自己增加的成员。
////从基类继承过过来的表现其共性，而新增的成员体现了其个性。
//
//
//
//
//
//
////class Java
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
////	}
////	void left()
////	{
////		cout << "Java,Python,C++...(公共分类列表)" << endl;
////	}
////	void content()
////	{
////		cout << "JAVA学科视频" << endl;
////	}
////
////};
////
//////Python
////class Python
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
////	}
////	void left()
////	{
////		cout << "Java,Python,C++...(公共分类列表)" << endl;
////	}
////	void content()
////	{
////		cout << "Python学科视频" << endl;
////	}
////
////};
////
//////C++
////class CPP
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
////	}
////	void left()
////	{
////		cout << "Java,Python,C++...(公共分类列表)" << endl;
////	}
////	void content()
////	{
////		cout << "CPP学科视频" << endl;
////	}
////
////};
//
////继承
//class BasePage
//{
//public:
//
//	void header()
//			{
//				cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//			}
//			void footer()
//			{
//				cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//			}
//			void left()
//			{
//				cout << "Java,Python,C++...(公共分类列表)" << endl;
//			}
//			
//};
//
////Java
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "JAVA学科视频" << endl;
//	}
//};
//
////Python
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//
////CPP
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "CPP学科视频" << endl;
//	}
//};
//
//void test01()
//{
//	cout << "Java下载视频页面如下：" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "----------------------" << endl;
//
//	cout << "Python下载视频页面如下：" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//
//	cout << "----------------------" << endl;
//
//	cout << "C++下载视频页面如下：" << endl;
//	CPP cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//
//}
//
//int main()
//{
//	test01();
//
//
//
//	system("pause");
//	return 0;
//}