#include <iostream>
using namespace std;

//可以让函数名相同，提高复用性
//函数重载的满足条件
//1、在同一个作用域下
//2、函数名称相同
//3、函数参数类型不同，或者个数不同，或者顺序不同
void func()
{
	cout << "func调用" << endl;
}

void func(int a)
{
	cout << "func(int a) 调用!" << endl;
}

void func(double a)
{
	cout << "func(double a) 调用!" << endl;
}

void func(int a, double b)
{
	cout << "func(int a, double b) 调用!" << endl;
}

void func(double a, int b)
{
	cout << "func(double a, int b) 调用!" << endl;
}

int main3()
{
	
	//func();
	//func(10);
	//func(3.14);
	func(10, 3.14);

	system("pause");
	return 0;
}
