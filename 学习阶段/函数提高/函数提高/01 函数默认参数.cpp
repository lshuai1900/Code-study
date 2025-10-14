#include<iostream>
using namespace std;

//函数默认参数

//如果我们自己传入了数据，就用自己的数据，如果没有，那么就用默认值
//语法：返回值 函数名 （形参 = 默认值）{}
int func(int a,int b = 20,int c = 30)
{
	return a + b + c;
}


//注意事项
//1、如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
int func2(int a, int b, int c, int d)//如果b有默认参数，那么c，d也必须有
{
	return a + b + c;
}

//2、如果函数的声明有了默认参数，函数实现就不能有默认参数
//声明和实现只能有一个默认参数
int func3(int a , int b = 20);

int func3(int a = 10, int b)
{
	return a + b;
}

int main1()
{

	//cout << func(10 , 30) << endl;

	cout << func3() << endl;

	system("pause");
	return 0;
}