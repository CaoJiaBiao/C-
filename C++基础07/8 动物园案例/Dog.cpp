#include "Dog.h"



Dog::Dog()
{
	cout << "Dog()" << endl;
}


Dog::~Dog()
{
	cout << "~Dog()" << endl;
}

void Dog::voice()
{
	cout << "Dog wang wang..." << endl;
}
