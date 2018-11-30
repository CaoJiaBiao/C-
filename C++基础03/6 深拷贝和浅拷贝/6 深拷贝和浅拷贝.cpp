#define  _CRT_SECURE_NO_WARNINGS 
#include<iostream>
using namespace std;
class Teacher {
private:
	int id;
	char *name;
public:
	//有参数的构造函数
	Teacher(int a,const char *b) {
		id = a;
		int len = strlen(b);
		name = (char*)malloc(len + 1);
		strcpy(name, b);
	}
	~Teacher()
	{//构造函数中开辟内存，要在析构中释放
		if (name != NULL) {
			free(name);
			name = NULL;
			cout << "析构了Teacher的name" << endl;
		}
	}
	//显示写一个拷贝构造函数
	//通过显示拷贝构造函数提供了深拷贝的动作
	Teacher(const Teacher &another) {
		id = another.id;
		int len = strlen(another.name);
		name = (char *)malloc(len + 1);
		strcpy(name, another.name);
	}
};
int main(void) {
	Teacher t1(1, "zhang3");
	//如果不提供一个显示的拷贝构造函数， 通过系统自带的默认拷贝构造函数
	Teacher t2(t1); //会调用t2的拷贝构造函数，将t1的值拷贝给t2
	return 0;
}