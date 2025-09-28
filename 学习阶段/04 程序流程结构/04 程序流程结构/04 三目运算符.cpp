#include <iostream>
using namespace std;


int main4()
{
	
	int a = 10;
	int b = 5;
	int c = 0;
	
	c=(a > b ? a : b);

	cout << "c=" << c << endl;
	//在C++中三目运算符返回的是变量，可以继续赋值

	(a < b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	/*if (a > b) {
		c = a;
		cout << "c=" << c << endl;
	}
	else {
		c = b;
		cout << "c=" << c << endl;
	}*/

	system("pause");
	return 0;

}