#include <iostream>
using namespace std;

int main()
{
	//goto��� (������ʹ��)
	int a = 0;
	cout << "������һ������a��";
	cin >> a;

	if (a > 5)
	{
		goto label1; //��ת��label1
	}
	cout << "a <= 5" << endl;
label1:
	cout << "a > 5" << endl;




	system("pause");
	return 0;

}