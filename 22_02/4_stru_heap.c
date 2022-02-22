//Declare struct elements on heap : struct containing char[] and self ref pointter

#include<stdio.h>
#include<string.h>
struct student
	{
	char name[10];
	struct student *ptr;
	}stu;

int main()
{
	typedef struct student stu;
	stu *s_heap;
	s_heap = (stu *)malloc(sizeof(stu));
}
