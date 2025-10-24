//#include<iostream>
//using namespace std;
//#include<fstream>
//#include<string>
//
//class Person
//{
//public:
//
//	char m_Name[64];
//	int m_Age;
//};
//
//void test01()
//{
//	ofstream ofs;
//	
//	ofs.open("person.txt", ios::out | ios::binary);
//
//	Person p = { "уехЩ",18 };
//	ofs.write((const char*)&p, sizeof(Person));
//
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}