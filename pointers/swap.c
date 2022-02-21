#include<stdio.h>
void swap(int *a, int *b);
int main()
{
	int a=6,b=7;
	printf("before swapping %d %d\n",a,b);
	swap(&a,&b);
	printf("after swapping by using pointers: %d %d\n",a,b);
	
	return 0;
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
