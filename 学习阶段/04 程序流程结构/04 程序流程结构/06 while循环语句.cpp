#include <iostream>
using namespace std;


int main6()
{
	int a = 0;
	//在写循环的时候要避免死循环的出现 while（）一定要有条件
	while (a < 10) 
	{
		//cout << "a=" << a << endl;
		a = a++;
		cout << "a=" << a << endl;
	}
	//a = a++;
	//cout << "a=" << a << endl;


	system("pause");
	return 0;

}