#include "SalesManager.h"



SalesManager::SalesManager()
{

}

void SalesManager::init()
{
	cout << "���������۾��������" << endl;
	cin >> this->name;

	fixSalary = 5000;
	salePerson = 0.05;
}

SalesManager::~SalesManager()
{
	cout << "~SalesManager()" << endl;
}
//�õ�Ա����нˮ�ķ���
void SalesManager::getPay()
{
	cout << "���������۾������µ����۶�" << endl;
	cin >> this->saleAmount;

	this->salary = this->fixSalary + this->saleAmount*this->salePerson;
}
//Ա����������
void SalesManager::uplevel(int addLevel)
{
	this->level += addLevel;
}