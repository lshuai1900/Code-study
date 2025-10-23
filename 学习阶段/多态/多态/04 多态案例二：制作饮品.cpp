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

	//烧水
	virtual void Boil() 
	{
		cout << "煮农夫山泉!" << endl;
	}
	//冲泡
	virtual void Brew() 
	{
		cout << "冲泡咖啡!" << endl;
	}
	//倒入杯中
	virtual void PourInCup() 
	{
		cout << "将咖啡倒入杯中!" << endl;
	}
	//加入辅料
	virtual void PutSomething() 
	{
		cout << "加入牛奶!" << endl;
	}
};

class Tea :public AbstractDrinking
{
public:

	//烧水
	virtual void Boil()
	{
		cout << "煮矿泉水!" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡茶叶!" << endl;
	}
	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中!" << endl;
	}
	//加入辅料
	virtual void PutSomething()
	{
		cout << "加入枸杞!" << endl;
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