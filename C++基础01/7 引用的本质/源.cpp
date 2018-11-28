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
//在研究引用的时候 ，可以将引用理解为 一个 常指针
//在理解引用的时候， 可以将引用理解为 一个变量的别名

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
//编译器发现 Teacher &t 形参是一个引用， Teacher &t = &t1;
	//当给引用初始化的时候， 会有一个&  的隐形操作
{
	a = 10;
	//a 实际上是一个常量指针， 但是如果你给一个a赋值，
	//编译器会有一个隐形的操作， *
	//即和testB相同
}
void testB(int * const a)
{
	*a = 10;
}
int main(void)
{
	int a = 10;
	int b = 20;
	int &re = a;//引用必须初始化.引用在初始化之后，也不能够被改变
	re = b;//实际上是a=b;而不是让re指向b
	cout << "sizeof(A)=" << sizeof(A) << endl;
	cout << "sizeof(B)=" << sizeof(B) << endl;
	//引用实际上是常指针，所以大小都是4
	Teacher t = { 1,"zhangsan" };
	test(t);
	cout << "a的id为" << t.id<<endl;
}