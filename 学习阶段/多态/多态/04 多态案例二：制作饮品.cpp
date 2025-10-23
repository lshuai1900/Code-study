#include<iostream>
using namespace std;

class AbstractDrinking
{
public:

	virtual void Boil() = 0;

	virtual void Brew() = 0;

	virtual void PourInCup() = 0;

	virtual void PutSomething() = 0;

	 void makeDrink()
	{
		 Boil();
		 Brew();
		 PourInCup();
		 PutSomething();
	}
};

class Coffee :public AbstractDrinking
{
public:

	//��ˮ
	virtual void Boil() 
	{
		cout << "��ũ��ɽȪ!" << endl;
	}
	//����
	virtual void Brew() 
	{
		cout << "���ݿ���!" << endl;
	}
	//���뱭��
	virtual void PourInCup() 
	{
		cout << "�����ȵ��뱭��!" << endl;
	}
	//���븨��
	virtual void PutSomething() 
	{
		cout << "����ţ��!" << endl;
	}
};

class Tea :public AbstractDrinking
{
public:

	//��ˮ
	virtual void Boil()
	{
		cout << "���Ȫˮ!" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ!" << endl;
	}
	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��!" << endl;
	}
	//���븨��
	virtual void PutSomething()
	{
		cout << "�������!" << endl;
	}
};

void doWork(AbstractDrinking*abs)
{
	abs->makeDrink();
	delete abs;
}

void test01()
{
	doWork(new Coffee);

	cout << "---------------" << endl;

	doWork(new Tea);
}

int main()
{
	test01();

	system("pause");
	return 0;
}