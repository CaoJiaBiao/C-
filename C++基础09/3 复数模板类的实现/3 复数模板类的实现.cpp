#define  _CRT_SECURE_NO_WARNINGS 
#include <iostream>

using namespace std;

template<class T>
class Complex;

template <class T>
Complex<T> mySub(Complex<T> &c1, Complex<T> &c2);




template <class T>
class Complex
{
public:
	Complex()
	{
		this->a = 0;
		this->b = 0;
	}
	Complex(T a,T b)
	{
		this->a = a;
		this->b = b;
	}
	//如果写一个模板类提供一个友元函数， << >> 要在这个函数的声明 在操作符和参数列表之间
	// <T>
	friend ostream & operator << <T> (ostream &os, Complex &c);
	
	//滥用友元
	friend Complex<T> mySub<T>(Complex<T> &c1, Complex<T> &c2);

	Complex operator + (Complex &another)
	{
		Complex temp(this->a + another.a, this->b + another.b);
		return temp;
	}
	Complex operator - (Complex &another);
	void printComplex()
	{
		cout << "(" << a << "+" << b <<"i"<<")" << endl;
	}
private:
	T a;
	T b;
};

template<class T>
Complex<T> mySub(Complex<T> &c1, Complex<T> &c2)
{
	Complex<T> temp(c1.a - c2.a, c1.b - c2.b);
	return temp;
}

template<class T>
ostream & operator<<(ostream & os, Complex<T> & c)
{
	os << "( " << c.a << "+" << c.b << "i )" << endl;
	return os;
}

template <class T>
Complex<T> Complex<T>::operator - (Complex<T> &another)
{
	Complex temp(this->a - another.a, this->b - another.b);
	return temp;
}
int main(void)
{
	Complex<int> c1(1, 2);
	c1.printComplex();
	Complex<int> c2(3, 4);
	Complex<int> c3;
	c3 = c1 + c2;
	c3.printComplex();
	c3 = c1 - c2;
	c3.printComplex();
	cout << c3 <<endl;
	Complex<int> c5;
	c5 = mySub(c1, c2);
	cout << c5 << endl;
}


