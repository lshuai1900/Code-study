#include <iostream>
using namespace std;
#include<ctime>
int main7()
{
	

	srand((unsigned int)time(NULL));//添加随机数的种子 作用：利用系统当前时间生成随机数
	//系统生成随机数
	int num = rand() % 100 + 1; //生成一个0-99的随机数
	//cout << num << endl;
	int i = 0;

	while (i<5)
	{
//玩家猜测
	int vai = 0;
	cin >> vai;
	i = ++i;
	//判断玩家猜测
	if (vai > num)
	{
		cout << "过大" << endl;
	}
	else if (vai < num)
	{
		cout << "过小" << endl;
	}
	else
	{
		cout << "猜对了" << endl; break;//可以利用break来退出循环
	}
	

	//猜对 退出游戏

	//猜错 提示猜的结果过大还是过小
	}
	
	cout << "你失败了" << endl;

	system("pause");
	return 0;

}