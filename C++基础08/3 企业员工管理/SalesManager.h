#pragma once
#include "Manager.h"
#include"SalesMan.h"
class SalesManager :public Manager,public SalesMan
{
public:
	SalesManager();
	~SalesManager();

	//�õ�Ա����нˮ�ķ���
	virtual void getPay();
	//Ա����������
	virtual void uplevel(int addLevel);
	//�ṩһ����ʾ�ĳ�ʼ���ӿ�
	virtual void init();
};

