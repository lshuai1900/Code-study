#include<iostream>
using namespace std;
//函数的定义
//返回值类型 函数名(参数列表){函数体}

int add(int a, int b)
{
	int sum = a + b;
	return sum;
}



int main2() {
	//main函数的调用add函数
	int num1 = 10;
	int num2 = 20;

	int result = add(num1, num2);

	cout << "result = " << result << endl;

	system("pause");

	return 0;
}
