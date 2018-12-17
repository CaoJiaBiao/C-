#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"Employee.h"
#include"Technician.h"
#include"Manager.h"
#include"SalesMan.h"
#include"SalesManager.h"

using namespace std;
int main(void)
{
	Employee *tech = new SalesManager;

	tech->init();
	tech->uplevel(1);

	tech->getPay();
	tech->displayStatus();
	delete tech;
	return 0;
}