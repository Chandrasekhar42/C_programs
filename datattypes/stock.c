#include "my.h"
static int total_stock=200;
void stock(void)
{
	printf("THE AVAILABLE STOCK IN THE MARKET IS %d\n",total_stock);
}
void del(int n)
{
    total_stock-=n;
}
void add(int n)
{
	total_stock+=n;
}
int getstock(void)
{
	return total_stock;
}
