#include <iostream>
using namespace std;
#include <string>

struct Student {
	string name;
	int age;
	int score;
};
//打印学生信息
void printstudent1(struct Student s) //值传递
{
	s.age = 25;
	s.name = "王五";
	s.score = 99;
	cout << "值传递   姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;
}

void printstudent2(struct Student* p) //地址传递
{
	p->age = 30;
	p->name = "王五";
	p->score = 59;
	cout << "地址传递   姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}



int main5()
{
	//结构体做函数参数
	//将学生传入到一个参数中，打印学生所有信息

	Student s = { "张三",18,85 };

	//printstudent1(s);

	printstudent2(&s);
	cout << "main函数中  姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;



	system("pause");
	return 0;
}
