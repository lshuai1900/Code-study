#include <iostream>
using namespace std;


int main2()
{

	int a = 0;
	cout << "请输入分数：" << endl;
	cin >> a;
	cout << "你输入的分数为：" << a << endl;

	if (a >= 600)
	{

		//cout << "一本" << endl;

		if (a > 700) {
			cout << "清华" << endl;
		}
		else if (a > 650) {
			cout << "北大" << endl;
		}
		else {
			cout << "人大" << endl;
		}
	}
	else
	{
		if (a >= 500)
		{
			cout << "二本" << endl;
		}
		else
		{
			if (a >= 300)
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