#include<stdio.h>
int main()
{
	int a=8,b=-9,c=0;

	//unary operators - +
	
	c=-b;
	printf("%d is value after unary -sign of a\n",c);
	
	// arithematic  operator  - + % / *
	
	printf("%d is the addition\n",a+b);
	printf("%d is the substraction\n",a-b);
        printf("%d is the multiplication\n",a*b);
        printf("%d is the division\n",a/b);
        printf("%d is the modular division\n",a%b);
	
	//relational operator > < >= <= == !=
	
	if (a>b)
		printf("%d\n",a);
	else if(a<b)
		printf("%d\n",b);
	else if(a==b)
		printf("both are same");
	printf("\n");
	if(c>=b)
	{
		printf("printing c %d",c);
	}
	else if(c<=b)
	{
		printf("printing b %d",b);
	}
        // bit wise operators & | ^ << >> ~
	 printf("%d\n",a&b);
	   printf("%d\n",a|b);
  printf("%d\n",a^b);
  printf("%d\n",a<<b);
  printf("%d\n",a>>b);
  // conditional operators
   a>b?printf("%d\n",a):("%d\n",b);
   // assignment opeator
   a=b;
   c=0;
   printf("%d\n",a);
   printf("%d\n",c);
   //logical operators && || 
   if(a&&c)
   {
	   printf("%d",a);
   }
   else if(a||c)
   {
	   printf("%d\n",a);
   }
   //increment and decrement operator
    a++;
    ++b;
    --c;
    printf("%d\n %d\n %d\n ",a,b,c);
}
