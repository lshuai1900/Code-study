#include <iostream>
using namespace std;

int main14()
{

	//break的使用时机

	//1.在switch语句中
	/*cout << "请选择副本难度:" << endl;
	cout << "普通" << endl;
	cout << "中等" << endl;
	cout << "困难" << endl;

	int select = 0;

	cin >> select;
	switch (select)
	{
		case 1:
		cout << "进入普通副本" << endl;
		break;
		case 2:
		cout << "进入中等副本" << endl;
		break;
		case 3:
		cout << "进入困难副本" << endl;
		break;
		default:
		break;
	}*/


	//2.在循环语句中

	/*for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		cout << "当前数字为:" << i << endl;
	}*/


	//3.当满足某个条件时，跳出循环

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break; //跳出的是离它最近的循环
			}
			cout << "*";
		}
		cout << endl;
	}


	system("pause");
	return 0;

}