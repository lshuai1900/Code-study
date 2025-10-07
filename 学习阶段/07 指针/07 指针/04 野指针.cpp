#include<iostream>
using namespace std;

int main4()
{
	//在程序中，尽量不要使用野指针
	int* p = (int*)0x1100;

	cout << *p << endl;

	system("pause");
	return 0;
}
