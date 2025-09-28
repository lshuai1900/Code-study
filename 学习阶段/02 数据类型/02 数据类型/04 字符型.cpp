#include <iostream>
using namespace std;

int main4()
{
	//1、字符型变量创建方式
	char ch = 'a';
	cout << ch << endl;

	//2、字符型变量所占内存大小 1
	cout << "char 字符型变量所占内存：" << sizeof(char) << endl;

	//3、字符型变量常见错误
	//ch = "a"; //错误，不可以用双引号
	//ch = 'abcde'; //错误，单引号内只能引用一个字符
	//char ch2 = 'b'; 这个是正确的写法

	//4、字符型变量对应ASCII编码	a-97		A-65 
	cout << (int)ch << endl;

	system("pause");

	return 0;
}