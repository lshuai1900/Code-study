#include<iostream>
using namespace std;
#include"swap.h"

//函数的分文件编写
//实现两个数字的交换

//void swap(int a, int b);//函数声明
//void swap(int a, int b)//函数定义
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "交换后a = " << a << endl;
//	cout << "交换后b = " << b << endl;
//}
	//创建后缀名为.h的头文件 
	//创建后缀名为.cpp的源文件
	//在头文件中写函数的声明
	//在源文件中写函数的定义

int main() {

	int a = 10;
	int b = 20;

	swap(a, b);

	system("pause");
	return 0;
}


