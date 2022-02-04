//Write a C program to find maximum and minimum element in an array. 

#include<stdio.h>
int findbig(int arr[],int n);
int findSmall(int arr[],int n)
int main()
{
	int n;
	printf("enter how many elements you want to enter");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements of array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int big=findbig(arr,n),c;
	printf("the biggest number is %d\n",big);
	c=findSmall(arr,n);
	printf("the smallest number %d\n",c);
}

int findbig(int arr[],int n)
{
	int big=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>big)
		{
			big=arr[i];
		}
	
	}
	return big;
}

int findSmall(int arr[],int n)
{
	int small=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>big)
		{
			small=arr[i];
		}
	
	}
	return small;
}
