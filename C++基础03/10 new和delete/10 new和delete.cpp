#define  _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
class Test 
{
public:
	Test() {
		m_a = 0;
		m_b = 0;
	}
	Test(int a, int b) {
		m_a = a;
		m_b = b;
		cout << "m_a = " << m_a << ", m_b = " << m_b << "构造 " << endl;
	}
	~Test()
	{
		cout << "m_a = " << m_a << ", m_b = " << m_b << "析构 " << endl;
	}
	void setA(int a)
	{
		m_a = a;
	}
	void setB(int b)
	{
		m_b = b;
	}
	void print() {
		cout << "m_a=" << m_a << "m_b=" << m_b << endl;
	}
private:
	int m_a;
	int m_b;
};
//C语言的
void test() {
	int *p = (int *)malloc(sizeof(int));
	*p = 10;
	cout << *p << endl;
	if (p!=NULL)
	{
		free(p);
	}
	int *arr = (int *)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i+1;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	if (arr != NULL) {
		free(arr);
	}
	cout << "--------------"<<endl;
	Test *jj = (Test *)malloc(sizeof(Test));
	jj->setA(10);
	jj->setB(11);
	jj->print();
	if (jj != NULL) {
		free(jj);
	}
}
//C++中的new delete
void test2() {
	int *p = new int;
	*p = 2;
	cout << *p << endl;
	if (p != NULL) {
		delete p;
	}
	int *arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	if (arr != NULL) {
		delete[] arr;
	}
	Test *jj = new Test(1,2);
	//会调用有参的构造函数
	//Test *tp = new Test;//调用了无参构造函数
	jj->print();
	if (jj != NULL) {
		delete(jj);//delete在释放一个对象指针的时候，会调用对象析构函数
	}
}
int main(void)
{
	test2();
	int * x = new int(10);//初始值
	int * x1 = new int[10];//大小为10的数组
	char * y = new char(10);
	char * z = new char[10];
}