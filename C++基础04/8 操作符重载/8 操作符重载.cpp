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
	//�ṩһ����ӡ�����ķ���
	void print()
	{
		cout << "(" << a << "+ " << b << " i )" << endl;
	}
	//operator -�൱�ں�����
	//���������صĳ�Ա����
	Complex operator+(Complex &another) {
		return Complex(this->a + another.a, this->b + another.b);
	}
	//ʵ��+= ������
	Complex& operator+=(Complex &another)
	{
		this->a += another.a;
		this->b += another.b;

		return *this;
	}
	//��Ŀ�����
	//���ã�������.operator-();
			// -������
	Complex operator -() {
		a = -a;
		b = -b;
	}
private:
	int a; //ʵ������
	int b;//��������
};
#if 0
//ȫ���ṩһ��+�Ų���������
Complex operator+(Complex &c1, Complex &c2)
{
	Complex temp(c1.a + c2.a, c1.b + c2.b);
	return temp;
}
#endif