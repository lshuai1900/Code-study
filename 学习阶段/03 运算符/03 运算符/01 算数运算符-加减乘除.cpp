#include<iostream>
using namespace std;

int main1() {

	int a1 = 30;
	int b1 = 20;


	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//两个整数相除 结果依然是整数，将小数部分去除

	int a2 = 10;
	int b2 = 20;

	cout << a2 / b2 << endl;

	int a3 = 10;
	int b3 = 2;

	cout << a3 / b3 << endl;//两个数字相除，除数是不可以为0的

	double d1 = 0.5;
	double d2 = 0.15;
	cout << d1 / d2 << endl;//运算的结果可以是小数

	int d4 = 9;
	int d3 = 2;
	cout << d4 % d3 << endl;

	system("pause");
	return 0;

}