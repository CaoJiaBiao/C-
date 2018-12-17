#pragma once
#include "Employee.h"
class Manager :virtual public Employee
{
public:
	Manager();
	~Manager();
	//得到员工的薪水的方法
	virtual void getPay();
	//员工升级方法
	virtual void uplevel(int addLevel);
	//提供一个显示的初始化接口
	virtual void init();

protected:
	int fixSalary;
};

