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
		cout << kind << "��ʼд����" << endl;
	}
	void run() 
	{
		cout << kind << "��ʼ�ܲ���" << endl;
	}
};
int main(void)
{
	Animal dog;
	strcpy(dog.kind, "��");
	dog.run();
	return 0;
}