#define  _CRT_SECURE_NO_WARNINGS 
#include<iostream>
using namespace std;
class Parent {
public:
	virtual void func() {
		cout << "Parent func()" << endl;

	}
private:
	int a;
};
class Parent2 {
public:
	void func() {
		cout << "Parent func()" << endl;

	}
private:
	int b;
};
int main(void) {
	Parent p1;
	Parent2 p2;
	cout << "sizeof(Parent):" << sizeof(p1) << endl;
	cout << "sizeof(Parent2):" << sizeof(p2) << endl;
}