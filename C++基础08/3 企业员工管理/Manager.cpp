#include "Manager.h"



Manager::Manager()
{

}


Manager::~Manager()
{
	cout << "~Manager()" << endl;
}
//�ṩһ����ʾ�ĳ�ʼ���ӿ�
void Manager::init()
{
	cout << "�����뾭��������" << endl;
	cin >> name;
	//����Ĺ̶�нˮ
	fixSalary = 8000;
 }
void Manager::getPay()
{
	this->salary = fixSalary;//���㾭����н��
}

void Manager::uplevel(int addLevel)
{
	this->level += addLevel;
}


