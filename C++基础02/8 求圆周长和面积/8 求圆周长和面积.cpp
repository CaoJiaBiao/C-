#define  _CRT_SECURE_NO_WARNINGS 
#include<iostream>
using namespace std;
class Circle
{
public:
	double getGirth() {
		return r * 3.14 * 2;
	}
	double getArea() {
		return r * 3.14 * r;
	}
	void setR(double x) {
		r = x;
	}
	double getR() {
		return r;
	}
private:
	double r;
};
int main(void)
{
	Circle c;
	c.setR(10);
	cout << "c的半径是" << c.getR() << "c的周长是" << c.getGirth() << "c的面积是" << c.getArea() << endl;
	return 0;
}