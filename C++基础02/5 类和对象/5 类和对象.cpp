#define  _CRT_SECURE_NO_WARNINGS 
#include<iostream>
using namespace std;
class Animal
{
public:
	char color[64];
	char kind[64];
	void write()
	{
		cout << kind << "开始写字了" << endl;
	}
	void run() 
	{
		cout << kind << "开始跑步了" << endl;
	}
};
int main(void)
{
	Animal dog;
	strcpy(dog.kind, "狗");
	dog.run();
	return 0;
}