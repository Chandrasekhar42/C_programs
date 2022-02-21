#include "my.h"
int sales_happened;
int total_sold=0;
int sales(void)
{
       int n;
	while(1)
	{
	printf("ENTER HOW MANY ITEMS YOU WANT TO SELL:");
	scanf("%d",&n);
	if(n<=getstock())
	{
		total_sold=total_sold+n;
		sales_happened++;
		del(n);
		printf("you have sucessfully saled %d stock\n",n);
                return 0;
	}
	else
	{
	    int n;
	    printf("we have only %d stock,if you need with in this PRESS 1 else press any digit:",getstock());
	    scanf("%d",&n);
	               if(n==1)
			{
				continue;
			}
			else
			{
				return 0;
			}
	

	}

}

}
