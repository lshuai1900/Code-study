#include <iostream>
using namespace std;

int main()
{
	//goto语句 (不建议使用)
	int a = 0;
	cout << "请输入一个整数a：";
	cin >> a;

	if (a > 5)
	{
		goto label1; //跳转到label1
	}
	cout << "a <= 5" << endl;
label1:
	cout << "a > 5" << endl;




	system("pause");
	return 0;

}