#include "Technician.h"



Technician::Technician()
{

}


Technician::~Technician()
{
	cout << "~Technician()" << endl;
}

void Technician::init()
{
	cout << "�����뼼����Ա������" << endl;
	cin >> this->name;
	perHourMoney = 100;
}
//�õ�Ա����нˮ�ķ���
void Technician::getPay()
{
	cout << "������Ա��һ���¹����˶���Сʱ" << endl;
	cin >> this->workHour;
	//���㹤��
	this->salary = workHour * perHourMoney;
}
//Ա����������
void Technician::uplevel(int addLevel)
{
	this->level += addLevel;
}

