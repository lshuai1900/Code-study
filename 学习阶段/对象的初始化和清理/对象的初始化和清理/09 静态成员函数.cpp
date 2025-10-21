#include<iostream>
using namespace std;

//静态成员函数特点：
//1 程序共享一个函数
//2 静态成员函数只能访问静态成员变量

class Person
{
public:
	static void func()
	{
		m_A = 100;//静态成员函数可以访问 静态成员变量
		//m_B = 200; 静态成员函数 不可以访问 非静态成员变量，无法区分到底是哪个对象的
		cout << "static void func调用" << endl;
	}
	static int m_A;
	int m_B;
private:

	//静态成员函数也是有访问权限的
	static void func2()
	{
		cout << "func2调用" << endl;
	}

};

void test901()
{
	//静态成员变量两种访问方式

	//1、通过对象
	Person p1;
	p1.func();

	//2、通过类名
	Person::func();


	//Person::func2(); //私有权限访问不到

}

int main()
{
	test901();



	system("pause");
	return 0;
}