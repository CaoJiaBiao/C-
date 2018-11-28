#include<iostream>
using namespace std;
inline void printAandB(int a, int b)
{
	cout << "A=" << a << ",B=" << b << endl;
}
int main(void)
{
	int a = 10, b = 20;
	printAandB(a, b);
	return 0;
}