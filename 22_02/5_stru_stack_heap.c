//2)compare the 2 struct one is on heap and other is on stack

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
	stu s_stack,*s_heap;
	s_heap = (stu *)malloc(sizeof(stu));
        strcpy(s_heap->name,"chandu");
        strcpy(s_stack.name,"chandu");
	if(strcmp(s_heap->name,s_stack.name) == 0)
		printf("strings are equal");
	else
		printf("strings are not equal");
return 0;
	
}
