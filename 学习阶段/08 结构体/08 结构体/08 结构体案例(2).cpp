#include <iostream>
using namespace std;
#include <string>

struct hero
{
	string name;
	int age;
	string sex;
};

//ð������
void bubbleSort(struct hero arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				struct hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		cout << "������" << arr[i].name << "\t���䣺" << arr[i].age << "\t�Ա�" << arr[i].sex << endl;
	}
}

int main()
{
	
	struct hero arr[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	int len = sizeof(arr) / sizeof(arr[0]);
	/*for(int i = 0; i < len; i++)
	{
		cout << "������" << arr[i].name << "\t���䣺" << arr[i].age << "\t�Ա�" << arr[i].sex << endl;
	}*/
	bubbleSort(arr, len);


	system("pause");
	return 0;
}
