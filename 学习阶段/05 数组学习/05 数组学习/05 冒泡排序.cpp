#include<iostream>
using namespace std;

int main5()
{
	int arr[10] = { 3,5,2,4,9,1,8,7,6,0 };
	for (int i = 0; i < 10 - 1; i++)//外层循环控制比较的轮数
	{
		for (int j = 0; j < 10 - 1 - i; j++)//内层循环控制每一轮比较的次数
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "排序后的数组为：" << endl;
	for(int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}