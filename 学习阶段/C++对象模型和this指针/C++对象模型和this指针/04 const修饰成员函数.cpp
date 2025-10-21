#include<iostream>
using namespace std;

class Person
{
public:

	//this指针的本质是一个指针常量，指针的指向不可修改
	//如果想让指针指向的值也不可以修改，需要声明常函数
	//不能修改指针的指向 Person* const this;
	void showPerson() const//加入const修饰
	{
		//const Type* const pointer;
		//this = NULL; //不能修改指针的指向 Person* const this;
		//this->mA = 100; //但是this指针指向的对象的数据是可以修改的

		//const修饰成员函数，表示指针指向的内存空间的数据不能修改，除了mutable修饰的变量

		this->m_B = 100;
		
	}

	void func()
	{
		m_A = 100;
	}
	int m_A;
	mutable int m_B;//加关键字mutable 特殊变量，即使在常函数中，也可以修改这个值
};




void test401()
{
	Person p;
	p.showPerson();
}

//常对象
void test402()
{
	const Person p;
	//p.m_A = 100;
	p.m_B = 100;//m_B 是特殊值，在常对象下也可以修改

	p.showPerson();
	//p.func(); //常对象 不可以调用普通成员函数，因为普通成员函数可以修改属性
}


int main()
{
	



	system("pause");
	return 0;
}