#pragma once
#define  _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<string>
using namespace std;
class Employee
{
public:
	Employee();
	virtual ~Employee();
	//得到员工的薪水的方法
	virtual void getPay() = 0;
	//员工升级方法
	virtual void uplevel(int addLevel) = 0;
	//显示员工信息的接口
	void displayStatus();

	//提供一个显示的初始化接口
	virtual void init() = 0;
protected:
	string name;//姓名
	int id;//员工编号
	double salary;//员工薪水
	int level;//员工等级
	static int startnum;//静态的编号计数
};

