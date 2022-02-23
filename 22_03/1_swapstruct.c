/*swap the values of 2 struct elements , find area by passing struct to fn 
use fn pointers , macro fn */

#include<stdio.h>
typedef struct rect
	{
		unsigned int len;
		unsigned int width;
		unsigned int area;

	}rec;
void rect_area(rec *);
int main()
{
	rec a,b,temp;
	a.len = 10;
	a.width = 20;
	b.len = 30;
	b.width = 40;
	void (*fptr)(rec*);
	fptr = rect_area;
	fptr(&a);
	fptr(&b);
	printf("%d\n",a.area);
	printf("%d\n",b.area);
	temp = a;
	a = b;
	b = temp;
	printf("%d\n",a.area);
	printf("%d\n",b.area);
	
}

void rect_area(rec *a)
{
	a->area = a->len * a->width;
			
}