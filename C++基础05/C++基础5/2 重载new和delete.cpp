#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//����new��delete��Ȼ��malloc��freeʵ��
//�����ǻ���ù��캯������������

class A
{
public:
	A()
	{
		this->a = 0;
		cout << "���캯������" << endl;
	}

	A(int a)
	{
		this->a = a;
		cout << "�в���A(inta)��������" << endl;
	}
	~A()
	{
		cout << "������������" << endl;
	}
	//����һ��new������
	void * operator new(size_t size) {
		cout << "����һ��new������" << endl;
		return malloc(size);
	}
	void * operator new[](size_t size)
	{
		cout << "������һ��new[]������" << endl;

		return malloc(size);
	}


		void operator delete(void *p)
	{
		cout << "������һ��delete������" << endl;
		//��һЩ�Լ���ҵ��

		if (p != NULL) {
			free(p);
		}
	}

	void operator delete[](void *p)
	{
		cout << "������һ��delete[]������" << endl;
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