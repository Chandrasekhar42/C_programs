#include "my.h"
extern int total_sold;
extern int total_purchased;
extern int purchase_happened;
extern int sales_happened;
int main()
{
	static int customers_visited;
	while(1)
	{
		int n;
		printf("TO SEE AVAILABLE STOCK PRESS        1 :\n");
		printf("TO MAKES SALES PLEASE  PRESS        2 :\n");
		printf("TO MAKE PURCHASE PLEASE PRESS       3 :\n");
		printf("TO GET OUT OF APP PLEASE PRESS      4 :\n");
		printf("ENTER YOUR CHOICE :");
		scanf("%d",&n);
		if(n==1)
		{
			stock();
			continue;
		}
		else if(n==2)
		{
		customers_visited++;
			sales();
			continue;
		}
		else if(n==3)
		{
		
			purchase();
			continue;
		}
		else if(n==4)
		{
			printf("CURRENT STOCK:%d\n",getstock());
			printf("NUMBER OF TIMES SALES HAPPENED:%d\n",sales_happened);
			printf("NUMBER OF TOTAL TIMES SOLD:%d\n",total_sold);
			printf("NUMBER OF TIMES PURCHASE HAPPENED IS:%d\n",purchase_happened);
			printf("NUMBER OF TOTAL ITEMS PURCHASED:%d\n",total_purchased);
			printf("TOTAL NUMBER OF CUSTOMERS VISITED STORE are:%d\n",customers_visited);
			printf("-------------THANKS FOR USING THIS APP-----------------\n");
			break;
		}
		else 
		{
			printf("INALID CHOICE\n");
			
		}
	}
return 0;
}

