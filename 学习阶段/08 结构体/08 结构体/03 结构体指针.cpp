#include <iostream>
using namespace std;
#include <string>

//结构体指针
//利用操作符->可以通过结构体指针访问结构体属性

struct Student {
	string name;
	int age;
	int score;
};


int main3()
{
	//创建学生结构体变量
	struct Student stu = { "张三", 20, 100 };
	
	//通过指针指向结构体变量
	struct Student* p = &stu;

	//通过指针访问结构体变量中的数据
	cout << "姓名:" << p->name << "年龄:" << p->age << " 分数:" << p->score << endl;
	//利用操作符->可以通过结构体指针访问结构体属性

	system("pause");
	return 0;
}
