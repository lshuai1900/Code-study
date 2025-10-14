#include<iostream>
using namespace std;
#include<string>

//设计一个学生类，属性有姓名、学号，可以给姓名、学号赋值，可以显示学生的姓名和学号

class student
{
public://公共权限

	//类中的属性和行为 我们统一叫 成员
	//属性  =  成员属性 成员变量
	//行为  =  成员函数 成员方法

	string name;

	string ID;

	void showstudent()
	{
		cout << "姓名:" << name << endl;
		cout << "学号:" << ID << endl;
	}
	//给姓名赋值
	void setname(string name)
	{
		name = name;
	}
};



int main01()
{
	string ID1;
	string name1;

	student a;
	cout << "请输入学生学号：" << endl;
	
	cin >> ID1;
	a.ID = ID1;

	cout << "请输入学生姓名：" << endl;

	cin >> name1;
	a.name = name1;

	a.showstudent();

	student b;

	b.ID = 02;
	b.name = "李四";

	b.showstudent();

	system("pause");
	return 0;
}