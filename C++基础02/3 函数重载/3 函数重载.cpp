#include<iostream>
using namespace std;
void printAandB(int a, int b = 100)//默认实参要在尾部
{
	cout << "A=" << a << ",B=" << b << endl;
}
void printAandBandC(int a, int)//占位符，不给，可以是(int a, int=0)
{
	cout << "A=" << a << endl;
}

//重载：返回值函数名相同，参数列表不同
//java中：后台返回值没有关系，方法名一样但是参数不同
//重载时尽量不要用占位符
void printAandB(int a, int b,int c)
{
	cout << "A=" << a << endl;
}
void printA(int a)
{
	cout << "A=" << a << endl;
}
void printA(double a)//与int的函数，调用时，通过隐式转换寻求一个匹配,找到则调用。
{
	cout << "A=" << a << endl;
}
int main(void)
{
	int a = 10, b = 20;
	void(*fp)(int, int) = printAandB;
	fp(a, b);
	return 0;
}