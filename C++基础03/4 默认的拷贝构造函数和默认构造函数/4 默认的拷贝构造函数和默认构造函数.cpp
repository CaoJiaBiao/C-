#define  _CRT_SECURE_NO_WARNINGS 
#include<iostream>
class Test {
private:
	int m;
public:
	//���߻���Ӱ�죬����һ���������вεģ������ṩĬ�ϵ���
	//Ĭ�Ϲ��캯��
	Test() {

	}
	//Ĭ�Ͽ������캯��,ֻ��ǳ����
	Test(Test const & a) {
		m = a.m;
	}
	//Ĭ����������
	~Test() {

	}
	void operator =(Test const & a) {

	}
};
int main() {
	Test t;
	Test t2 = t;//�õ���Ĭ�ϵĿ������캯��
	Test t4(t);//�õ���Ĭ�ϵĿ������캯��
	Test t3;
	t3 = t;//û���õ�Ĭ�ϵĿ������캯������Ϊ������������
}