#include <iostream>
using namespace std;
int main9()
{
	//打印所有三位数字
	int i = 100;

	do
	{
		int a = 0;
		int b = 0;
		int c = 0;

		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;

		if(a*a*a+b*b*b+c*c*c==i)
		{
		cout << i << endl;
		
		}

		i++;
	}

	while (i < 1000);

	
	

	system("pause");
	return 0;

}