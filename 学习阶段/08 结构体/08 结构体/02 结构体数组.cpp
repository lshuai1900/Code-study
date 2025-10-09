#include <iostream>
using namespace std;
#include <string>


struct Student {
	string name;
	int age;
	int score;
};

//通过学生类型创建具体学生
int main()
{
	struct Student stuarr[3]=
	{
		{"张三",18,100},
		{"李四",19,90},
		{"王五",20,80 }
	};

	stuarr[2].name = "赵六";
	stuarr[2].age = 21;
	stuarr[2].score = 70;

	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << stuarr[i].name << " 年龄：" << stuarr[i].age << " 分数：" << stuarr[i].score << endl;
	}


	system("pause");
	return 0;
}
