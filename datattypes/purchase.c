#include "my.h"
int purchase_happened;
int total_purchased=0;
int purchase(void)
{
	int n;
	while(1)
	{
	int maximum_stock=500;
	printf("ENTER HOW MANY ITEMS YOU WANT TO PURCHASE:");
	scanf("%d",&n);
	if(getstock()+n<=maximum_stock)
	{
		total_purchased+=n;
		purchase_happened++;
		printf("you have sucessfully purchased %d stock\n",n);
		add(n);
		return 0;
	}
	else
	{
		int n;
			printf("we have only %d stock space available,if you need with in this PRESS 1 else press any digit :",maximum_stock-getstock());
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

