#pragma once
#include "Employee.h"
class SalesMan :virtual public Employee
{
public:
	SalesMan();
	~SalesMan();
	//�õ�Ա����нˮ�ķ���
	virtual void getPay();
	//Ա����������
	virtual void uplevel(int addLevel);
	//�ṩһ����ʾ�ĳ�ʼ���ӿ�
	virtual void init();
protected:
	//���µ������ܶ�
	int saleAmount;

	//��ɱ���
	double salePerson;
};

