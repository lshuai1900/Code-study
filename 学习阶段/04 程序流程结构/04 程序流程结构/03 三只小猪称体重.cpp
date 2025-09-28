#include <iostream>
using namespace std;


int main3()
{
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;
	cout << "请输入a1体重：" << endl;
	cin >> a1;

	cout << "请输入a2体重：" << endl;
	cin >> a2;

	cout << "请输入a3体重：" << endl;
	cin >> a3;

	if (a1 > a2) 
	{
		if (a1 > a3) 
		{
			if (a2 > a3) 
			{
				cout << "a1>a2>a3" << endl;
			}
			else 
			{
				cout << "a1>a3>a2" << endl;
			}
		}
		else  
		{
			cout << "a3>a1>a2" << endl;
		}
	}
	else if (a3 > a2) 
	{
		cout << "a3>a2>a1" << endl;
	}
	else if (a1 > a3) 
	{
		cout << "a2>a1>a3" << endl;
	}
	else {
		cout << "a2>a1>a3" << endl;
	}
	system("pause");
	return 0;

}