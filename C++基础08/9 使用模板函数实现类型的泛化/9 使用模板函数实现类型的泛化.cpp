#define  _CRT_SECURE_NO_WARNINGS 
#include <iostream>

using namespace std;
//template <class T>
template<typename T>//���ߵȼ�
void myswap(T &a, T &b)
{
	T x = a;
	a = b;
	b = x;
}
template<class T>
void print(T a, T b)
{
	cout << "a=" << a << ",b=" << b << endl;
}
int main(void)
{
	int a = 10, b = 20;
	print<int>(a, b);//Ҳ������ô��

	myswap(a, b);
	print(a, b);
}