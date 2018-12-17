#include "SalesManager.h"



SalesManager::SalesManager()
{

}

void SalesManager::init()
{
	cout << "请输入销售经理的姓名" << endl;
	cin >> this->name;

	fixSalary = 5000;
	salePerson = 0.05;
}

SalesManager::~SalesManager()
{
	cout << "~SalesManager()" << endl;
}
//得到员工的薪水的方法
void SalesManager::getPay()
{
	cout << "请输入销售经历当月的销售饿" << endl;
	cin >> this->saleAmount;

	this->salary = this->fixSalary + this->saleAmount*this->salePerson;
}
//员工升级方法
void SalesManager::uplevel(int addLevel)
{
	this->level += addLevel;
}