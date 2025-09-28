#include <iostream>
using namespace std;
int main11()
{
	// 需求：1-100，7的倍数，个位数是7，十位数是7，敲桌子
	for(int i=1;i<=100;i++)
	{
		
		if(i%7==0||i%10==7||i/10==7)
		{
			cout << i << "敲桌子" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	

	

	//for循环结构清晰，比较常用
	system("pause");
	return 0;

}