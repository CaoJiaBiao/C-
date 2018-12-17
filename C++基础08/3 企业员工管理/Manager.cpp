#include "Manager.h"



Manager::Manager()
{

}


Manager::~Manager()
{
	cout << "~Manager()" << endl;
}
//提供一个显示的初始化接口
void Manager::init()
{
	cout << "请输入经历的姓名" << endl;
	cin >> name;
	//经理的固定薪水
	fixSalary = 8000;
 }
void Manager::getPay()
{
	this->salary = fixSalary;//计算经历的薪资
}

void Manager::uplevel(int addLevel)
{
	this->level += addLevel;
}


