#include<iostream>
using namespace std;
struct A
{
	int a;
};
struct B
{
	int &a;
};
//���о����õ�ʱ�� �����Խ��������Ϊ һ�� ��ָ��
//��������õ�ʱ�� ���Խ��������Ϊ һ�������ı���

struct Teacher
{
	int id;
	char name[64];

};
void test(Teacher &a)
{
	a.id = 10;
}
void testA(int &a)
//���������� Teacher &t �β���һ�����ã� Teacher &t = &t1;
	//�������ó�ʼ����ʱ�� ����һ��&  �����β���
{
	a = 10;
	//a ʵ������һ������ָ�룬 ����������һ��a��ֵ��
	//����������һ�����εĲ����� *
	//����testB��ͬ
}
void testB(int * const a)
{
	*a = 10;
}
int main(void)
{
	int a = 10;
	int b = 20;
	int &re = a;//���ñ����ʼ��.�����ڳ�ʼ��֮��Ҳ���ܹ����ı�
	re = b;//ʵ������a=b;��������reָ��b
	cout << "sizeof(A)=" << sizeof(A) << endl;
	cout << "sizeof(B)=" << sizeof(B) << endl;
	//����ʵ�����ǳ�ָ�룬���Դ�С����4
	Teacher t = { 1,"zhangsan" };
	test(t);
	cout << "a��idΪ" << t.id<<endl;
}