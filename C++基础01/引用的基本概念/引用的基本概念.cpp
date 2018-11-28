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
void print2(Teacher &t)//引用就是一个别名
{
	t.id = 3;
	cout << "t id=" << t.id << "t.name" << t.name << endl;
}
int main(void)
{
	int a = 10;//在内存上开辟了4个字节，a代表这4个字节
	int *p = &a;//p指向了a

	*p = 20;
	//c++另一种对变量的间接操作方式，使用引用

	int &b = a;//定义了一个引用b指向a，b是a的一个别名
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