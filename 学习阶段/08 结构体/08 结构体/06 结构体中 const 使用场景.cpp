#include <iostream>
using namespace std;
#include <string>

struct student
{
	string name;
	int age;
	int score;
};
//将函数中的形参改为指针类型，可以减少内存空间
void printStudent(const student *stu) //const修饰stu 只能读不能改
{
	//stu->age = 20; 
	cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;
}


int main6()
{
	student stu = { "张三",18,100 };

	//通过函数打印结构体信息
	printStudent(&stu);
	cout << "main 姓名：" << stu.name << " 年龄：" << stu.age << " 分数：" << stu.score << endl;

	system("pause");
	return 0;
}
