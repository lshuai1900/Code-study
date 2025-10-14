#include<iostream>
using namespace std;

//语法：数据类型 &别名 = 原名



int main2()
{
	int a = 10;
	
	//1、引用必须要初始化
	//int& b; 
	int& b = a;
	//2、引用一旦初始化之后就不能更改了
	int c = 20;
	b = c;

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl;

	system("pause");
	return 0;
}