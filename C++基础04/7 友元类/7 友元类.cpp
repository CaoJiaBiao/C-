#define  _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
class B;
class A {
public:
	friend class B;
private:
	int ma;
};
class B {
public:
	void test() {
		A a;
		a.ma;
	}
};