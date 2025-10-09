#include<iostream>
using namespace std;

//实现两个数交换
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap a=" << a << " b=" << b << endl;
}

void swap02(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "swap02 *p1=" << *p1 << " *p2=" << *p2 << endl;
}


int main7()
{
	
	//值传递
	int a = 10;
	int b = 20;
	cout << "交换前a=" << a << " b=" << b << endl;
	//swap(a, b);
	
	//地址传递 将变量的地址传递给函数 改变了实参的值
	swap02(&a, &b);
	cout << "交换后a=" << a << " b=" << b << endl;

	




	system("pause");
	return 0;
}
