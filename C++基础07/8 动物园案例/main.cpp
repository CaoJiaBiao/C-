#define  _CRT_SECURE_NO_WARNINGS 
#include"Animal.h"
#include"Cat.h"
#include"Dog.h"
int main(void)
{
	cout << "hhh" << endl;
	Animal *a = new Dog;
	AnimalVoice(a);
	delete a;
}