#include<stdio.h>
int main()
{
	int arr[10],i=0,j=0,frr[10]={0};  //frr for saving frequency
	printf("enter 10 elements:");
	for(i=0;i<10;i++)
	{

	scanf("%d",&arr[i]);

	}

	for(i=0;i<10;i++)
	{

	int count =1;

	for(j=i+1;j<10;j++)
	{
		if(arr[j] == arr[i])
		{
		count++;
		arr[j] = -1;             //removing the elements in arr if it matches to avoid counting
		}
	}	
		if(frr[i] != -1)         //to place the count in frr with respect to arr
		{
		frr[i] = count;
		}
	}

 
        for(i=0;i<10;i++)
	{
		
		if(arr[i] != -1)
		{
		printf("%d number count is %d",arr[i],frr[i]);
		printf("\n");
		}

	
	}
}
