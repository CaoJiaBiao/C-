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
		cout << "m_a = " << m_a << ", m_b = " << m_b << "���� " << endl;
	}
	~Test()
	{
		cout << "m_a = " << m_a << ", m_b = " << m_b << "���� " << endl;
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
//C���Ե�
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
//C++�е�new delete
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
	//������вεĹ��캯��
	//Test *tp = new Test;//�������޲ι��캯��
	jj->print();
	if (jj != NULL) {
		delete(jj);//delete���ͷ�һ������ָ���ʱ�򣬻���ö�����������
	}
}
int main(void)
{
	test2();
	int * x = new int(10);//��ʼֵ
	int * x1 = new int[10];//��СΪ10������
	char * y = new char(10);
	char * z = new char[10];
}