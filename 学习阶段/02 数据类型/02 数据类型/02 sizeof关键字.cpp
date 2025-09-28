#include <iostream>
using namespace std;

int main2()
{
	
	//语法：sizeof（数据类型/变量）
	short num1 = 10;
	cout << "short 类型所占内存空间为： " << sizeof(num1) << endl; 

	int num2 = 10;
	cout << "short 类型所占内存空间为： " << sizeof(num2) << endl;

	long num3 = 20;
	cout << "short 类型所占内存空间为： " << sizeof(long) << endl;

	long long num4 = 80;
	cout << "short 类型所占内存空间为： " << sizeof(num4) << endl;

	system("pause");

	return 0;
}