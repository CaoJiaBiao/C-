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
	//前缀
	Complex& operator ++() {//加上&是为了能一直调用，如++++++a
	}
	/*
	const Complex& operator ++() {//加上&是为了能一直调用，如++++++a
	}表示++只能用一次，即不能a++++;
	*/
	//后缀
	Complex& operator ++(int) {
	}
	//单目运算符
	//调用：对象名.operator-();
			// -对象名
	Complex operator -() {
		a = -a;
		b = -b;
	}
	/*
	//cout<<a;成员函数要写在cout里面，所以没有写在成员函数中
	//如果写在Complex里面，只能写成，a<<cout;
	ostream& operator <<( Complex &c) {
		os << "a=" << c.a << "b=" << c.b << endl;
		return os;
	}

	*/
private:
	int a; //实数部分
	int b;//虚数部分
};
#if 0
//全局和成员函数的区别只是有没有放第一个变量
//全局提供一个+号操作符重载
//这些要声明为complex的友元函数
Complex operator+(Complex &c1, Complex &c2)
{
	Complex temp(c1.a + c2.a, c1.b + c2.b);
	return temp;
}
Complex& operator++(Complex &c1, int)//占位操作符，用来表示后缀，亚元
{
	Complex temp(c1.a + c2.a, c1.b + c2.b);
	return temp;
}
ostream& operator <<(ostream &os, Complex &c) {
	os << "a=" << c.a << "b=" << c.b << endl;
	return os;
}//用法cout<<c2;
istream& operator >>(istream &is, Complex &c) {
	cout << "a" << endl;
	is >> c.a;
	return is;
}//用法cout<<c2;
#endif