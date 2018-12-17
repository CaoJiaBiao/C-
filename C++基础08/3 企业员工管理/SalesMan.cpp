#include "SalesMan.h"



SalesMan::SalesMan()
{

}

void SalesMan::init()
{
	cout << "请输入销售人员的姓名" << endl;
	cin >> this->name;
	this->salePerson = 0.04;
}
SalesMan::~SalesMan()
{
	cout << "~SalesMan()" << endl;
}
//得到员工的薪水的方法
void SalesMan::getPay()
{
	cout << "请输入该员工本月的销售额" << endl;
	cin >> saleAmount;
	this->salary = this->salePerson*this->saleAmount;
}
//员工升级方法
void SalesMan::uplevel(int addLevel)
{
	this->level += addLevel;
}