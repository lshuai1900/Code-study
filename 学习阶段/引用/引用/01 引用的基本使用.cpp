#include<iostream>
using namespace std;

//语法：数据类型 &别名 = 原名



int main1()
{
	int a = 10;
	//创建引用
	int& b = a;
	cout << a << endl;
	cout << b << endl;
	b = 20;
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}