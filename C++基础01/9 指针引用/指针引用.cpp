#include <iostream>

using namespace std;
struct Teacher
{
	int id;
	char name[64];
};
void getTeacher(Teacher *& a)//就是main中的tr
{
	a = (Teacher *)malloc(sizeof(Teacher));
	if (a == NULL)
	{
		cout << "error" << endl;
		return;
	}
	a->id = 10;
	strcpy(a->name, "zhangsan");
	return;
}
void free(Teacher *&a)
{
	if (a == NULL)
	{
		return;
	}
	free(a);
	a = NULL;
}
int main(void)
{
	Teacher *tr = NULL;
	getTeacher(tr);
}