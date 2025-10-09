#include<iostream>
using namespace std;

int main6()
{
	// 指针与数组
	// 利用指针访问数组中的元素
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//int* p = arr; // arr数组名表示数组首元素的地址

	//cout << *p << endl; // 1

	//p++; // 指针向后移动4个字节
	//cout << *p << endl; // 2

	cout << "利用指针访问数组中的元素" << endl;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr; // arr数组名表示数组首元素的地址
	for (int i = 0; i < 10; i++)
	{
		cout << *p << " " ;

		p++;
		
	}


	system("pause");
	return 0;
}
