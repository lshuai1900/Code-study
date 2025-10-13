#include<iostream>
using namespace std;
#include<string>
#define MAX 1000//最大人数

struct Person
{
	string name;
	int age;
	int  sex;
	string phone;
	string address;
};
struct addressbooks
	{
	Person personArray[MAX];//通讯录中保存的联系人数组
	int m_Size;//通讯录中当前人员的个数[0,1000]
};

//2、添加联系人
void addPerson(addressbooks* abs)
{
	//判断通讯录是否已满
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满" << endl;
	}
	else
	{
		//添加具体联系人

		//姓名
		string name;
		cout << "请输入姓名： " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].name = name;

		//性别
		cout << "请输入性别： " << endl;
		cout << "1--男  2--女" << endl;
		int sex = 0;

		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].sex = sex;
				break;
			}
			cout << "输入错误，请重新输入" << endl;
		}

		//年龄
		int age = 0;
		cout << "请输入年龄： " << endl;
		cin >> age;
		abs->personArray[abs->m_Size].age = age;
		
		//电话
		string phone;
		cout << "请输入电话号码： " << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].phone = phone;

		//地址
		string address;
		cout << "请输入家庭住址： " << endl;
		cin >> address;
		abs->personArray[abs->m_Size].address = address;

		//更新通讯录人数
		abs->m_Size++;
		cout << "添加联系人成功" << endl;

		system("pause");//请按任意键继续
		system("cls");//清屏

	}
}

//显示联系人

void showPerson(addressbooks* abs)
{
	//判断通讯录人数是否为零
	if (abs->m_Size == 0)
	{
		cout << "当前记录为零" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].name << "\t " << "性别：" << (abs->personArray[i].sex == 1 ? "男" : "女")
				<< "\t" << "年龄：" << abs->personArray[i].age << "\t" << "地址：" << abs->personArray[i].address << "\t"
				<< "电话：" << abs->personArray[i].phone << "\t" << endl;
		}
	}
	system("pause");
	system("cls");

	//不为零
}

//检测联系人是否存在，不存在返回-1
int ifexist(addressbooks* abs,string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].name == name)
		{
			return i;
		}
	else
		{
			return -1;
		}
	}
	
}
	
//删除联系人
void deletepreson(addressbooks* abs)
{
	cout << "请输入你想要删除的联系人：" << endl;
	string name;
	cin >> name;
	ifexist(abs, name);

	int ret = ifexist(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
		
}
//查找联系人
void findperson(addressbooks* abs)
{
	cout << "请输入你要查找的联系人：" << endl;
	string name;
	cin >> name;

	int ret = ifexist(abs, name);
	if (ret != -1)
	{
		cout << "姓名：" << abs->personArray[ret].name << "\t " << "性别：" << (abs->personArray[ret].sex == 1 ? "男" : "女")
			<< "\t" << "年龄：" << abs->personArray[ret].age << "\t" << "地址：" << abs->personArray[ret].address << "\t"
			<< "电话：" << abs->personArray[ret].phone << "\t" << endl;
	}
	else
	{
		cout << "未查到此人" << endl;
	}

	system("pause");
	system("cls");
}

//修改联系人

void modifyperson(addressbooks* abs)
{
	cout << "请输入你要修改的联系人：" << endl;
	string name;
	cin >> name;

	int ret = ifexist(abs, name);
	if (ret != -1)
	{
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[ret].name = name;

		//性别
		cout << "请输入性别： " << endl;
		cout << "1--男  2--女" << endl;
		int sex = 0;

		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].sex = sex;
				break;
			}
			cout << "输入错误，请重新输入" << endl;
		}

		//年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->personArray[ret].age = age;

		//电话
		string phone;
		cout << "请输入电话：" << endl;
		cin >> phone;
		abs->personArray[ret].phone = phone;

		//地址
		string address;
		cout << "请输入地址：" << endl;
		cin >> address;
		abs->personArray[ret].address = address;

		cout << "修改成功！" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}
//清空联系人
void cleanperson(addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}


//1、菜单界面
void showMenu()
{
	cout << "================" << endl;
	cout << " 1.添加联系人" << endl;
	cout << " 2.显示联系人" << endl;
	cout << " 3.删除联系人" << endl;
	cout << " 4.查找联系人" << endl;
	cout << " 5.修改联系人" << endl;
	cout << " 6.清空联系人" << endl;
	cout << " 0.退出通讯录" << endl;
	cout << "================" << endl;
}

int main()
{	
	//创建通讯录结构体变量
	struct addressbooks abs;
	//初始化通讯录
	abs.m_Size = 0;


	int select = 0;

	while (true) 
	{
	//1、菜单界面
	showMenu();
	
	cin >> select;
	switch (select)
	{
	case 1://添加联系人
		addPerson(&abs);//利用地址传递
		break;
	case 2://显示联系人
		showPerson(&abs);
		break;
	case 3://删除联系人
	{
		/*cout << "请输入要删除联系人的姓名：" << endl;
		string name;
		cin >> name;

		if (ifexist(&abs, name) == -1)
		{
			cout << "查无此人" << endl;
		}
		else
		{
			cout << "找到此人" << endl;
		}
		break;*/

		deletepreson(&abs);
	}
	case 4://查找联系人
		findperson(&abs);
		break;
	case 5://修改联系人
		modifyperson(&abs);
		break;
	case 6://清空联系人
		cleanperson(&abs);
		break;
	case 0://退出通讯录
		cout << "欢迎下次使用" << endl;
		system("pause");
		return 0;
		break;
	}
	}
	



	
	system("pause");
	return 0;
}