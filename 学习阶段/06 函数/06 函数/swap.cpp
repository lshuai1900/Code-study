#include"swap.h"//包含头文件



void swap(int a, int b)//函数定义
{
	int temp = a;
	a = b;
	b = temp;
	cout << "交换后a = " << a << endl;
	cout << "交换后b = " << b << endl;
}