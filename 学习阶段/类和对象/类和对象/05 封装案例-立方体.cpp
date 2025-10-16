#include<iostream>
using namespace std;

class Cube
{
public:
	//��
	void setL(int l)
	{
		m_L = l;
	}

	int getL()
	{
		return m_L;
	}
	//��
	void setW(int w)
	{
		m_W = w;
	}

	int getW()
	{
		return m_W;
	}
	//��
	void setH(int h)
	{
		m_H = h;
	}

	int getH()
	{
		return m_H;
	}

	int calculateS()
	{
		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
	}

	int calculateV()
	{
		return m_L * m_W * m_H;
	}

	//���ó�Ա�����ж������������Ƿ���ͬ
	bool isSameByClass(Cube &c)
	{
		if (getL() == c.getL() && getH() == c.getH() && getW() == c.getW())
		{
			return true;
		}
		else
		{
			return false;
		}
	}

private:

	int m_L;
	int m_W;
	int m_H;

};
//����ȫ�ֺ����ж������������Ƿ���ͬ
bool isSame(Cube &c1, Cube &c2)
{
	if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW())
	{
		return true;
	}
}


int main5()
{
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(20);


	cout << "c1�������" << c1.calculateS() << endl;
	cout << "c1�������" << c1.calculateV() << endl;

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	bool ret = isSame(c1, c2);

	if (ret == true)
	{
		cout << "c1��c2��ͬ" << endl;
	}
	else
	{
		cout << "c1��c2����ͬ" << endl;
	}

	//����ȫ�ֺ����ж������������Ƿ���ͬ
	ret = c1.isSameByClass(c2);

	if (ret == true)
	{
		cout << "��Աc1��c2��ͬ" << endl;
	}
	else
	{
		cout << "��Աc1��c2����ͬ" << endl;
	}

	system("pause");
	return 0;
}