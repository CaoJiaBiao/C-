#define  _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
class Complex
{
public:
	Complex() {
		a = 0;
		b = 0;
	}
	Complex(int x, int y) {
		a = x;
		b = y;
	}
	//提供一个打印虚数的方法
	void print()
	{
		cout << "(" << a << "+ " << b << " i )" << endl;
	}
	//operator -相当于函数名
	//操作符重载的成员函数
	Complex operator+(Complex &another) {
		return Complex(this->a + another.a, this->b + another.b);
	}
	//实现+= 操作符
	Complex& operator+=(Complex &another)
	{
		this->a += another.a;
		this->b += another.b;

		return *this;
	}
	//单目运算符
	//调用：对象名.operator-();
			// -对象名
	Complex operator -() {
		a = -a;
		b = -b;
	}
private:
	int a; //实数部分
	int b;//虚数部分
};
#if 0
//全局提供一个+号操作符重载
Complex operator+(Complex &c1, Complex &c2)
{
	Complex temp(c1.a + c2.a, c1.b + c2.b);
	return temp;
}
#endif