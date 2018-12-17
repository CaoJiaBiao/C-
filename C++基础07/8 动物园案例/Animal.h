#pragma once
#include<iostream>
using namespace std;
class Animal
{
public:
	Animal();
	virtual ~Animal();
	virtual void voice() = 0;
};
//此函数是根据 抽象类来进行封装的。 这种函数 就叫架构函数。
void AnimalVoice(Animal *ap);
