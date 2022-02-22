#include<stdio.h>
int main()
{
	struct student
	{
		enum week {sunday,monday,tuesday,wednesday,thursday,friday,saturday};
		
	};
        typedef struct student s1;

	printf("%ld",sizeof(struct student));
}
