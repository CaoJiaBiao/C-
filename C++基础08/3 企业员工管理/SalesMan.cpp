#include "SalesMan.h"



SalesMan::SalesMan()
{

}

void SalesMan::init()
{
	cout << "������������Ա������" << endl;
	cin >> this->name;
	this->salePerson = 0.04;
}
SalesMan::~SalesMan()
{
	cout << "~SalesMan()" << endl;
}
//�õ�Ա����нˮ�ķ���
void SalesMan::getPay()
{
	cout << "�������Ա�����µ����۶�" << endl;
	cin >> saleAmount;
	this->salary = this->salePerson*this->saleAmount;
}
//Ա����������
void SalesMan::uplevel(int addLevel)
{
	this->level += addLevel;
}