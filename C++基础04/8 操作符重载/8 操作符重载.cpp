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
	//ǰ׺
	Complex& operator ++() {//����&��Ϊ����һֱ���ã���++++++a
	}
	/*
	const Complex& operator ++() {//����&��Ϊ����һֱ���ã���++++++a
	}��ʾ++ֻ����һ�Σ�������a++++;
	*/
	//��׺
	Complex& operator ++(int) {
	}
	//��Ŀ�����
	//���ã�������.operator-();
			// -������
	Complex operator -() {
		a = -a;
		b = -b;
	}
	/*
	//cout<<a;��Ա����Ҫд��cout���棬����û��д�ڳ�Ա������
	//���д��Complex���棬ֻ��д�ɣ�a<<cout;
	ostream& operator <<( Complex &c) {
		os << "a=" << c.a << "b=" << c.b << endl;
		return os;
	}

	*/
private:
	int a; //ʵ������
	int b;//��������
};
#if 0
//ȫ�ֺͳ�Ա����������ֻ����û�зŵ�һ������
//ȫ���ṩһ��+�Ų���������
//��ЩҪ����Ϊcomplex����Ԫ����
Complex operator+(Complex &c1, Complex &c2)
{
	Complex temp(c1.a + c2.a, c1.b + c2.b);
	return temp;
}
Complex& operator++(Complex &c1, int)//ռλ��������������ʾ��׺����Ԫ
{
	Complex temp(c1.a + c2.a, c1.b + c2.b);
	return temp;
}
ostream& operator <<(ostream &os, Complex &c) {
	os << "a=" << c.a << "b=" << c.b << endl;
	return os;
}//�÷�cout<<c2;
istream& operator >>(istream &is, Complex &c) {
	cout << "a" << endl;
	is >> c.a;
	return is;
}//�÷�cout<<c2;
#endif