#include<iostream>
using namespace std;

int main2()
{
	//可以统计整个数组在内存中的长度
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << sizeof(arr[0]) << endl; 
	cout << arr[0] << endl;
	cout << "数组中的元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

	//可以通过数组名查看数组首地址
	
	cout << "数组的首地址为：" << (int)arr << endl;
	cout << "数组第一个元素的首地址为：" << (int)&arr[1] << endl;


	//数组名是不能修改的，不可以进行赋值操作
	//例如 arr = arr + 1; //错误写法
	system("pause");
	return 0;
}