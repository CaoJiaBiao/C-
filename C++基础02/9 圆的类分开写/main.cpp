#define  _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include "Circle.h"
using namespace std;
int main(void)
{
	Circle c;
	c.setR(10);
	cout << "圆的半径是：" << c.getR() << "圆的面积是：" << c.getArea() << endl;
	return 0;
}