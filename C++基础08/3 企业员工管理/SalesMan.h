#pragma once
#include "Employee.h"
class SalesMan :virtual public Employee
{
public:
	SalesMan();
	~SalesMan();
	//得到员工的薪水的方法
	virtual void getPay();
	//员工升级方法
	virtual void uplevel(int addLevel);
	//提供一个显示的初始化接口
	virtual void init();
protected:
	//当月的销售总额
	int saleAmount;

	//提成比率
	double salePerson;
};

