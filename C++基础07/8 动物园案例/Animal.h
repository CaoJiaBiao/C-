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
//�˺����Ǹ��� �����������з�װ�ġ� ���ֺ��� �ͽмܹ�������
void AnimalVoice(Animal *ap);
