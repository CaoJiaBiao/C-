#define  _CRT_SECURE_NO_WARNINGS 
#include<iostream>
using namespace std;
class Teacher {
private:
	int id;
	char *name;
public:
	//�в����Ĺ��캯��
	Teacher(int a,const char *b) {
		id = a;
		int len = strlen(b);
		name = (char*)malloc(len + 1);
		strcpy(name, b);
	}
	~Teacher()
	{//���캯���п����ڴ棬Ҫ���������ͷ�
		if (name != NULL) {
			free(name);
			name = NULL;
			cout << "������Teacher��name" << endl;
		}
	}
	//��ʾдһ���������캯��
	//ͨ����ʾ�������캯���ṩ������Ķ���
	Teacher(const Teacher &another) {
		id = another.id;
		int len = strlen(another.name);
		name = (char *)malloc(len + 1);
		strcpy(name, another.name);
	}
};
int main(void) {
	Teacher t1(1, "zhang3");
	//������ṩһ����ʾ�Ŀ������캯���� ͨ��ϵͳ�Դ���Ĭ�Ͽ������캯��
	Teacher t2(t1); //�����t2�Ŀ������캯������t1��ֵ������t2
	return 0;
}