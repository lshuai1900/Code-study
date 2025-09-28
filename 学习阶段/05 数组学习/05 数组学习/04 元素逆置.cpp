#include<iostream>
using namespace std;

int main()
{
	
	int arr[] = { 1,4,5,2,3 };
	for (int  i=0; i<5;i++)
	{
		cout << arr[i] << endl;
	}


	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	while(start < end)
	{
		int a = arr[start];
		arr[start] = arr[end];
		arr[end] = a;
		start++;
		end--;
	}
	

	
	cout << "------------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	
	system("pause");
	return 0;
}