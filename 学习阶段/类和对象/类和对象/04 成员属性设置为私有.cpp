#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

//成员属性设置私有
//1、可以自己控制读写
//2、对于写可以检测数据有效性

//人类
class person1
{
public:
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getName()
	{
		return m_Name;
	}

	//读取年龄
	int getAge()
	{
		return m_Age;
	}

	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "年龄输入有误，修改失败" << endl;
			return;
		}
	}

	void setIdol(string idol)
	{
		m_Idol = idol;
	}

private:
	string m_Name;//可读可写

	int m_Age = 18;//只读

	string m_Idol;//只写
};


int main4()
{
	person1 p1;

	p1.setName("张三");
	cout << "姓名：" << p1.getName() << endl;

	p1.setAge(120);
	p1.getAge();
	cout << "年龄：" << p1.getAge() << endl;

	p1.setIdol("小明");
	//cout << "ouxiang:" << p1.getIdol() << endl; 只写状态 外界访问不到

	system("pause");
	return 0;
}