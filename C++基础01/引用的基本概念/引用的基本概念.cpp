#include<iostream>

using namespace std;

struct Teacher 
{
	int id;
	char name[64];

};
void print1(Teacher t) 
{
	t.id = 2;
	cout << "t id=" << t.id << "t.name" << t.name << endl;
}
void print2(Teacher &t)//���þ���һ������
{
	t.id = 3;
	cout << "t id=" << t.id << "t.name" << t.name << endl;
}
int main(void)
{
	int a = 10;//���ڴ��Ͽ�����4���ֽڣ�a������4���ֽ�
	int *p = &a;//pָ����a

	*p = 20;
	//c++��һ�ֶԱ����ļ�Ӳ�����ʽ��ʹ������

	int &b = a;//������һ������bָ��a��b��a��һ������
	b = 30;
	cout << a;
	cout << "hello" << endl;
	Teacher t = { 1,"zhang3" };
	print1(t);
	cout << t.id << endl;
	print2(t);
	cout << t.id << endl;
	return 0;
}