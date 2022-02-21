#include<stdio.h>
void sort(int *arr);
int main()
{
	int arr[10],i=0;
	for(i=0;i<10;i++)
	{
	scanf("%d", &arr[i]);
	}
	sort(arr);
	for(i=0;i<10;i++)
	{
	printf("%d\n",arr[i]);	
	}
}

void sort(int *arr)
{
	int i=0,j=0,temp=0;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
		if(*(arr+j) < *(arr+i))
		{
		 temp = *(arr+i) ;
		*(arr+i) = *(arr+j);
		*(arr+j) = temp;
		}
		}
	}
}
