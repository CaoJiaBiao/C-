#include<iostream>
using namespace std;
void printAandB(int a, int b = 100)//默认实参要在尾部
{
	cout << "A=" << a << ",B=" << b << endl;
}
void printAandB(int a, int)//占位符，不给，可以是(int a, int=0)
{
	cout << "A=" << a << endl;
}
int main(void)
{
	int a = 10, b = 20;
	printAandB(a);
	return 0;
}