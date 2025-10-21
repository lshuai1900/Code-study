#include<iostream>
using namespace std;


class Person
{
public:
	void showClassName()
	{
		cout << "this is Person Class" << endl;
	}

	void showPersonAge()
	{
		if (this == NULL)
		{
			return;
		}
		cout << "age = " << this->m_Age << endl;
	}

	int m_Age;
};

void test301()
{
	Person* p = NULL;
	
	p->showPersonAge();

	p->showClassName();
}


int main3()
{
	test301();



	system("pause");
	return 0;
}