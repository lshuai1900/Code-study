//#include<iostream>
//using namespace std;
//
//
//
//
////�̳еĺô��� == ���Լ����ظ��Ĵ��� ==
////class A : public B;
////A ���Ϊ���� �� ������
////B ���Ϊ���� �� ����
////public �̳з�ʽ
//// 
////�������еĳ�Ա���������󲿷֣�
////һ���Ǵӻ���̳й����ģ�һ�����Լ����ӵĳ�Ա��
////�ӻ���̳й������ı����乲�ԣ��������ĳ�Ա����������ԡ�
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
////		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
////	}
////	void footer()
////	{
////		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
////	}
////	void left()
////	{
////		cout << "Java,Python,C++...(���������б�)" << endl;
////	}
////	void content()
////	{
////		cout << "JAVAѧ����Ƶ" << endl;
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
////		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
////	}
////	void footer()
////	{
////		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
////	}
////	void left()
////	{
////		cout << "Java,Python,C++...(���������б�)" << endl;
////	}
////	void content()
////	{
////		cout << "Pythonѧ����Ƶ" << endl;
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
////		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
////	}
////	void footer()
////	{
////		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
////	}
////	void left()
////	{
////		cout << "Java,Python,C++...(���������б�)" << endl;
////	}
////	void content()
////	{
////		cout << "CPPѧ����Ƶ" << endl;
////	}
////
////};
//
////�̳�
//class BasePage
//{
//public:
//
//	void header()
//			{
//				cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//			}
//			void footer()
//			{
//				cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//			}
//			void left()
//			{
//				cout << "Java,Python,C++...(���������б�)" << endl;
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
//		cout << "JAVAѧ����Ƶ" << endl;
//	}
//};
//
////Python
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//
////CPP
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "CPPѧ����Ƶ" << endl;
//	}
//};
//
//void test01()
//{
//	cout << "Java������Ƶҳ�����£�" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "----------------------" << endl;
//
//	cout << "Python������Ƶҳ�����£�" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//
//	cout << "----------------------" << endl;
//
//	cout << "C++������Ƶҳ�����£�" << endl;
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