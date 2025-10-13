#include<iostream>
using namespace std;
#include<string>
#define MAX 1000//�������

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
	Person personArray[MAX];//ͨѶ¼�б������ϵ������
	int m_Size;//ͨѶ¼�е�ǰ��Ա�ĸ���[0,1000]
};

//2�������ϵ��
void addPerson(addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ�����
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼����" << endl;
	}
	else
	{
		//��Ӿ�����ϵ��

		//����
		string name;
		cout << "������������ " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].name = name;

		//�Ա�
		cout << "�������Ա� " << endl;
		cout << "1--��  2--Ů" << endl;
		int sex = 0;

		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].sex = sex;
				break;
			}
			cout << "�����������������" << endl;
		}

		//����
		int age = 0;
		cout << "���������䣺 " << endl;
		cin >> age;
		abs->personArray[abs->m_Size].age = age;
		
		//�绰
		string phone;
		cout << "������绰���룺 " << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].phone = phone;

		//��ַ
		string address;
		cout << "�������ͥסַ�� " << endl;
		cin >> address;
		abs->personArray[abs->m_Size].address = address;

		//����ͨѶ¼����
		abs->m_Size++;
		cout << "�����ϵ�˳ɹ�" << endl;

		system("pause");//�밴���������
		system("cls");//����

	}
}

//��ʾ��ϵ��

void showPerson(addressbooks* abs)
{
	//�ж�ͨѶ¼�����Ƿ�Ϊ��
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].name << "\t " << "�Ա�" << (abs->personArray[i].sex == 1 ? "��" : "Ů")
				<< "\t" << "���䣺" << abs->personArray[i].age << "\t" << "��ַ��" << abs->personArray[i].address << "\t"
				<< "�绰��" << abs->personArray[i].phone << "\t" << endl;
		}
	}
	system("pause");
	system("cls");

	//��Ϊ��
}

//�����ϵ���Ƿ���ڣ������ڷ���-1
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
	
//ɾ����ϵ��
void deletepreson(addressbooks* abs)
{
	cout << "����������Ҫɾ������ϵ�ˣ�" << endl;
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
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
		
}
//������ϵ��
void findperson(addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	int ret = ifexist(abs, name);
	if (ret != -1)
	{
		cout << "������" << abs->personArray[ret].name << "\t " << "�Ա�" << (abs->personArray[ret].sex == 1 ? "��" : "Ů")
			<< "\t" << "���䣺" << abs->personArray[ret].age << "\t" << "��ַ��" << abs->personArray[ret].address << "\t"
			<< "�绰��" << abs->personArray[ret].phone << "\t" << endl;
	}
	else
	{
		cout << "δ�鵽����" << endl;
	}

	system("pause");
	system("cls");
}

//�޸���ϵ��

void modifyperson(addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	int ret = ifexist(abs, name);
	if (ret != -1)
	{
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].name = name;

		//�Ա�
		cout << "�������Ա� " << endl;
		cout << "1--��  2--Ů" << endl;
		int sex = 0;

		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].sex = sex;
				break;
			}
			cout << "�����������������" << endl;
		}

		//����
		int age = 0;
		cout << "���������䣺" << endl;
		cin >> age;
		abs->personArray[ret].age = age;

		//�绰
		string phone;
		cout << "������绰��" << endl;
		cin >> phone;
		abs->personArray[ret].phone = phone;

		//��ַ
		string address;
		cout << "�������ַ��" << endl;
		cin >> address;
		abs->personArray[ret].address = address;

		cout << "�޸ĳɹ���" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}
//�����ϵ��
void cleanperson(addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}


//1���˵�����
void showMenu()
{
	cout << "================" << endl;
	cout << " 1.�����ϵ��" << endl;
	cout << " 2.��ʾ��ϵ��" << endl;
	cout << " 3.ɾ����ϵ��" << endl;
	cout << " 4.������ϵ��" << endl;
	cout << " 5.�޸���ϵ��" << endl;
	cout << " 6.�����ϵ��" << endl;
	cout << " 0.�˳�ͨѶ¼" << endl;
	cout << "================" << endl;
}

int main()
{	
	//����ͨѶ¼�ṹ�����
	struct addressbooks abs;
	//��ʼ��ͨѶ¼
	abs.m_Size = 0;


	int select = 0;

	while (true) 
	{
	//1���˵�����
	showMenu();
	
	cin >> select;
	switch (select)
	{
	case 1://�����ϵ��
		addPerson(&abs);//���õ�ַ����
		break;
	case 2://��ʾ��ϵ��
		showPerson(&abs);
		break;
	case 3://ɾ����ϵ��
	{
		/*cout << "������Ҫɾ����ϵ�˵�������" << endl;
		string name;
		cin >> name;

		if (ifexist(&abs, name) == -1)
		{
			cout << "���޴���" << endl;
		}
		else
		{
			cout << "�ҵ�����" << endl;
		}
		break;*/

		deletepreson(&abs);
	}
	case 4://������ϵ��
		findperson(&abs);
		break;
	case 5://�޸���ϵ��
		modifyperson(&abs);
		break;
	case 6://�����ϵ��
		cleanperson(&abs);
		break;
	case 0://�˳�ͨѶ¼
		cout << "��ӭ�´�ʹ��" << endl;
		system("pause");
		return 0;
		break;
	}
	}
	



	
	system("pause");
	return 0;
}