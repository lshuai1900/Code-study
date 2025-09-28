#include<iostream>
using namespace std;

int main() {


	int a = 10;
	//在C++中，0表示假，非0表示真 10代表真
	cout << !a << endl;//逻辑运算符  非 ! 真变假，假变真

	cout << !!a << endl;

	//逻辑与 &&   逻辑或 ||
	int b = 20;
	cout << (a > 5 && b > 15) << endl;//1 需要两个条件都为真，结果才为真
	cout << (a > 5 || b < 15) << endl;//1 只要有一个条件为真，结果就为真

	//同时进行多个逻辑运算时，逻辑与的优先级高于逻辑或
	cout << (a > 5 || b < 15 && b > 10) << endl;//1 先算b<15&&b>10，再算a>5||结果



	system("pause");
	return 0;

}