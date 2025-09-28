#include <iostream>
using namespace std;

// 常量的定义方式
// #define 宏常量
// const 修饰的常量

// 1 #define 宏常量
#define Day 7

int main3()
{
	
	cout << "一周总共有:" << Day << "天" << endl;//endl 可以换成 "\n"
	// 2 const 修饰的常量
	const int month = 12;


	system("pause");

	return 0;
}