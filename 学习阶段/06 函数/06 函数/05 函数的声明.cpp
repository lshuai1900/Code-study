#include<iostream>
using namespace std;

//函数的声明，声明可以写多次，但定义只能写一次
int max(int a, int b);


int main5() {

	int a = 10;	
	int b = 20;

	cout << "max = " << max(a, b) << endl;


	system("pause");
	return 0;
}


int max(int a, int b)
{
	return a > b ? a : b;//a>b返回a 否则返回b
}
