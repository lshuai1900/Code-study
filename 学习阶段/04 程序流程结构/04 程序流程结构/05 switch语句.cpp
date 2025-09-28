#include <iostream>
using namespace std;


int main5()
{

	//swith语句
	//给一个电影打分
	//10~9 经典电影
	//8~7 非常好
	//6~5 一般
	//5~0 烂片

	//if和switch区别：
	//Switch缺点，判断的时候只能是整数型或者字符型，不能是一个区间
	//Switch优点，结构清晰，执行效率高

	int a = 0;
	cout << "请输入电影评分：" << endl;
	cin >> a;
	cout << "您输入的分数为：" << a << endl;

	switch (a) 
	{
	case 10:
		cout << "经典电影" << endl; break;

	case 9:
		cout << "经典电影" << endl; break;
	case 8:
		cout << "非常好电影" << endl; break;
	case 7:
		cout << "非常好电影" << endl; break;
	case 6:
		cout << "一般电影" << endl; break;
	case 5:
		cout << "一般电影" << endl; break;
	default:
		cout << "烂片" << endl; break;
	}

	

	system("pause");
	return 0;

}