#include<iostream>
using namespace std;
void printAandB(int a, int b = 100)//Ĭ��ʵ��Ҫ��β��
{
	cout << "A=" << a << ",B=" << b << endl;
}
void printAandB(int a, int)//ռλ����������������(int a, int=0)
{
	cout << "A=" << a << endl;
}
int main(void)
{
	int a = 10, b = 20;
	printAandB(a);
	return 0;
}