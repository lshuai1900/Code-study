#include<iostream>
using namespace std;

int main4() {
	
	int a = 10;
	a = 100;
	cout << "a=" << a << endl;

	a = 10;
	a += 2;// a = a + 2;
	cout << "a=" << a << endl;

	a = 10;
	a -= 2;// a = a - 2;
	cout << "a=" << a << endl;

	a = 10;
	a *= 2;// a = a * 2;
	cout << "a=" << a << endl;

	a = 10;
	a /= 5;// a = a / 5;
	cout << "a=" << a << endl;
		
	a = 10;
	a %= 3;// a = a % 3;
	cout << "a=" << a << endl;

	system("pause");
	return 0;

}