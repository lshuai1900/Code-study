//#include<iostream>
//using namespace std;
//
//class Animal
//{
//public:
//
//	Animal()
//	{
//		cout << "Animal 构造函数" << endl;
//	}
//
//	/*virtual ~Animal()
//	{
//		cout << "Animal 析构函数" << endl;
//	}*/
//
//	//纯虚析构 需要声明也需要实现
//	virtual ~Animal() = 0;
//
//	//纯虚函数
//	virtual void speak() = 0;
//};
//
//	Animal:: ~Animal()
//	{
//		cout << "Animal 纯虚析构函数" << endl;
//	}
//
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat 构造函数" << endl;
//		m_Name = new string(name);
//	}
//
//	virtual void speak()
//	{
//		cout << *m_Name << "小猫在说话" << endl;
//	}
//
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat 析构函数" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//	string* m_Name;
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	delete animal;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}