#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//重载new和delete虽然用malloc和free实现
//但还是会调用构造函数和析构函数

class A
{
public:
	A()
	{
		this->a = 0;
		cout << "构造函数调用" << endl;
	}

	A(int a)
	{
		this->a = a;
		cout << "有参数A(inta)函数调用" << endl;
	}
	~A()
	{
		cout << "析构函数调用" << endl;
	}
	//重载一个new操作符
	void * operator new(size_t size) {
		cout << "重载一个new操作符" << endl;
		return malloc(size);
	}
	void * operator new[](size_t size)
	{
		cout << "重载了一个new[]操作符" << endl;

		return malloc(size);
	}


		void operator delete(void *p)
	{
		cout << "重载了一个delete操作符" << endl;
		//做一些自己的业务

		if (p != NULL) {
			free(p);
		}
	}

	void operator delete[](void *p)
	{
		cout << "重载了一个delete[]操作符" << endl;
		if (p != NULL)
		{
			free(p);
		}
	}
private:
	int a;
};
int main(void)
{
	return 0;
}