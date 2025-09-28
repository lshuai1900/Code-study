#include <iostream>
using namespace std;

int main15()
{
	// continue语句用于结束本次循环，继续下一次循环
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			continue; // 结束本次循环，继续下一次循环
		}
		cout << i << endl; // 输出奇数
	}
	
	

	system("pause");
	return 0;

}