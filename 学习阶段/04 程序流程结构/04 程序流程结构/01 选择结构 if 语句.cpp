#include <iostream>
using namespace std;


int main1() 
{

	int a = 0;
	cout << "请输入分数：" << endl;
	cin >>  a ;
	cout << "你输入的分数为：" << a << endl;

	if (a >= 600)
	{
	
		cout << "一本" << endl;

	}
	else
	{
		if (a>= 500)
		{
			cout << "二本" << endl;
		}
		else 
		{
			if (a>= 300)
			{
				cout << "三本" << endl;
			}
			else
				cout << "大专" << endl;
		}
	}
	system("pause");
	return 0;

}