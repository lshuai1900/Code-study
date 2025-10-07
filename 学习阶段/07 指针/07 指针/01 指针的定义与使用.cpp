#include<iostream>
using namespace std;

int main1()
{
	//定义指针
	int a = 10;
	//指针定义的语法：数据类型 * 指针变量名
	int* p; //&取地址运算符
	//让指针指向变量a的地址
	p = &a;//&取地址运算符
	cout << "a = " << (int) & a << endl;
	cout << "a = " << (int)p << endl;

	//使用指针
	//可以通过解引用运算符*来使用指针指向的变量

	cout << "*p = " << *p << endl;


	system("pause");
	return 0;
}
