#include<iostream>
using namespace std;

void mysort(int *arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp; 
			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
}


int main()
{
	int arr[] = { 6,2,7,1,4,9,3,5,8,10 };

	int len = sizeof(arr) / sizeof(arr[0]);

	mysort(arr, len);



	system("pause");
	return 0;
}
