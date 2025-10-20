#include<iostream>
using namespace std;

//按照参数分类：无参构造（默认构造函数）和有参构造
//按照类型分类：普通构造函数 拷贝构造
class Person
{
public:
	//构造函数
	Person()
	{
		cout << "Person的无参构造函数调用" << endl;
	}

	Person(int a)
	{
		age = a;
		cout << "Person的有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person &p)
	{
		age = p.age;//将传入的人身上所有的属性，拷贝到我身上
		cout << "Person的拷贝构造函数调用" << endl;
	}

	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
	int age = 0;
};

void test02()
{
	//1、括号法
	//Person p;//默认构造函数调用
	//Person p2(10);//有参构造函数
	//Person p3(p2);
	//注意事项
	//调用默认构造函数的时候，不要加()
	// 因为下面这行代码，编译器会认为是一个函数的声明，不会认为在创建对象
	// Person p1();
	// 
	// 
	//cout << "p2的年龄：" << p2.age << endl;
	//cout << "p3的年龄：" << p3.age << endl;

	//2、显示法
	Person p1;
	Person p2 = Person(10);//有参构造
	Person p3 = Person(p2);//拷贝构造

	//Person(10);//匿名对象 特点：当前行为执行结束后，系统会立即回收匿名对象
	//cout << "AAAAA" << endl;
	//注意事项
	//不要利用拷贝构造函数 初始化匿名对象 编译器会认为Person（p3） === Person p3; 对象的声明
	//Person(p3);


	//3、隐式转换法
	Person p4 = 10;//相当于 写了 Person p4 = Person(10); 有参构造
	Person p5 = p4;//拷贝构造
}


int main2()
{
	test02();



	system("pause");
	return 0;
}