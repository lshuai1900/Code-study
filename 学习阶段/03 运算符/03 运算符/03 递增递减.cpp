#include<iostream>
using namespace std;

int main3() {
	////前置递增
	//int a = 10;
	//++a; //前置递增
	//cout << "a=" << a << endl;

	////后置递增
	//int b = 10;
	//b++; //先使用后递增
	//cout << "b=" << b << endl;

	int a2 = 10;
	int b2 = a2++ * 10;
	cout << "a2=" << a2 << endl; //11
	cout << "b2=" << b2 << endl; //11
	//前置递增，后置递增区别，
	//前置递增：先把变量本身加1，然后再参与运算
	//后置递增：先把变量本身参与运算，然后再把变量本身加1

	system("pause");
	return 0;

}