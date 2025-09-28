#include<iostream>
using namespace std;

int main3()
{
	int max = 0;
	int arr[] = { 300,350,500,400,250 };
	max = arr[0];

	for(int i = 0; i < 5; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "The max weight is: " << max << endl;

	system("pause");
	return 0;
}