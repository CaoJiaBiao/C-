#include<iostream>
using namespace std;
void printAandB(int a, int b = 100)//Ĭ��ʵ��Ҫ��β��
{
	cout << "A=" << a << ",B=" << b << endl;
}
void printAandBandC(int a, int)//ռλ����������������(int a, int=0)
{
	cout << "A=" << a << endl;
}

//���أ�����ֵ��������ͬ�������б�ͬ
//java�У���̨����ֵû�й�ϵ��������һ�����ǲ�����ͬ
//����ʱ������Ҫ��ռλ��
void printAandB(int a, int b,int c)
{
	cout << "A=" << a << endl;
}
void printA(int a)
{
	cout << "A=" << a << endl;
}
void printA(double a)//��int�ĺ���������ʱ��ͨ����ʽת��Ѱ��һ��ƥ��,�ҵ�����á�
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