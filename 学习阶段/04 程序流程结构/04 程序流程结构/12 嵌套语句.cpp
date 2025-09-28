#include <iostream>
using namespace std;

int main12()
{
	//外层循环控制打印多少行
	for (int i = 0; i < 10; i++)
	{
		//内层循环控制每一行打印多少个*
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}


	


	system("pause");
	return 0;

}