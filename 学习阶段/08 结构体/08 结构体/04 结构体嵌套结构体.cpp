#include <iostream>
using namespace std;
#include <string>


struct Student {
	string name;
	int age;
	int score;
};


struct Teacher {
	int id;
	string name;
	int age;
	Student stu; //结构体嵌套结构体
};

int main4()
{
	Teacher tea;
	tea.id = 1001;
	tea.age = 37;
	tea.name = "张老师";
	tea.stu.name = "李四";
	tea.stu.age = 18;
	tea.stu.score = 100;

	cout << "教师姓名：" << tea.name << "教师年龄：" << tea.age << "教师辅导学生姓名：" << tea.stu.name << endl;


	system("pause");
	return 0;
}
