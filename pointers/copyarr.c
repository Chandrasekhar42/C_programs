#include<stdio.h>
int main()
{
	int i,arr[10] = {0,1,2,3,4,5,6,7,8,9},brr[10];
	int *src_ptr,*des_ptr,*end_ptr;
	src_ptr = arr; des_ptr = brr; end_ptr = &arr[9];
	
	for (i = 0; i < 10; i++)
    	{
        scanf("%d", (src_ptr + i));
    	}
	
	while(src_ptr <= end_ptr)
		{
		*des_ptr = *src_ptr;
		src_ptr++;
		des_ptr++;
		}

	for(i=0;i<10;i++)
		{
		printf("%d\n",brr[i]);
		}
	
}
