#define  _CRT_SECURE_NO_WARNINGS 
#include<iostream>
class Test {
private:
	int m;
public:
	//三者互不影响，但是一旦定义了有参的，将不提供默认的了
	//默认构造函数
	Test() {

	}
	//默认拷贝构造函数,只是浅拷贝
	Test(Test const & a) {
		m = a.m;
	}
	//默认析构函数
	~Test() {

	}
	void operator =(Test const & a) {

	}
};
int main() {
	Test t;
	Test t2 = t;//用到了默认的拷贝构造函数
	Test t4(t);//用到了默认的拷贝构造函数
	Test t3;
	t3 = t;//没有用到默认的拷贝构造函数，因为这个运算符重载
}