#include<stdio.h>
int main()
{
	struct student
	{
		enum week
                {
			sunday,monday,tuesday,wednesday,thursday,friday,saturday
		}a;
		
	}s;
        

	printf("%ld",sizeof(struct student));
}
