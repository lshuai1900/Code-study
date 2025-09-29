#include<iostream>
using namespace std;

//函数的常见样式

//无参无返
void test01()//括号内没有参数，函数体内没有return
{
	cout << "test01函数调用" << endl;
}

//有参无返
void test02(int a)//括号内有参数，函数体内没有return
{
	cout << "test02函数调用" << endl;
	cout << "a = " << a << endl;
}


//无参有返
int test03()//括号内没有参数，函数体内有return
{
	cout << "test03函数调用" << endl;
	return 100;
}

//有参有返
int test04(int a)//括号内有参数，函数体内有return
{
	cout << "test04函数调用" << endl;
	cout << "a = " << a << endl;
	return a;
}




int main4() {
	
	//无参无返函数调用
	test01();
	
	//有参无返函数调用
	test02(100);//需要传递实参给形参

	//无参有返函数调用
	int num1 = test03();
		cout << "num1 = " << num1 << endl;

	//无参有返函数调用
	int num2 = test04(200);
	cout << "num2 = " << num2 << endl;


	system("pause");
	return 0;
}
