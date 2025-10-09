#include <iostream>
using namespace std;
#include <string>

//创建学生数据类型（姓名 年龄 分数）
//自定义数据类型 一些类型集合在一起 形成一个新的类型
//语法  struct 结构体名 {成员列表};
struct Student {
	string name;
	int age;
	int score;
}stu3;//结构体变量创建方式3

//通过学生类型创建具体学生
int main1()
{ 
	//结构体变量创建方式1
	struct Student stu1; //struct 关键字可以省略

	stu1.name = "张三";
	stu1.age = 18;
	stu1.score = 100;

	cout << "姓名：" << stu1.name << " 年龄：" << stu1.age << " 分数：" << stu1.score << endl;

	//结构体变量创建方式2
	struct Student stu2 = { "李四",19,60 };

	cout << "姓名：" << stu2.name << " 年龄：" << stu2.age << " 分数：" << stu2.score << endl;


	stu3.name = "王五";
	stu3.age = 18;
	stu3.score = 80;


	cout << "姓名：" << stu3.name << " 年龄：" << stu3.age << " 分数：" << stu3.score << endl;


	system("pause");
	return 0;
}
