#pragma once
#include "Employee.h"
//技术人员
class Technician :public Employee
{
public:
	Technician();
	~Technician();
	//得到员工的薪水的方法
	virtual void getPay() ;
	//员工升级方法
	virtual void uplevel(int addLevel) ;

	//提供一个显示的初始化接口
	virtual void init();

private:
	double perHourMoney;//每小时多少钱
	int workHour;//一个月工作了多少小时
};

