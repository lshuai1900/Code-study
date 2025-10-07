#include<iostream>
using namespace std;

int main3()
{
	
	// 空指针与野指针
	//空指针用于给指针变量进行初始化
	int* p = NULL; // NULL是空指针常量

	//空指针是不可以进行访问的
	//0~255之间的地址是系统占用的，因此不可以访问
	cout << *p << endl;

	//野指针是指针变量没有初始化

	system("pause");
	return 0;
}
