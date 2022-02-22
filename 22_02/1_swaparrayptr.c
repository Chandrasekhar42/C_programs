/*Write a C program to compare two strings using pointers.
use : macro , const , fn pointer */

#define SIZE 10                           
#include<stdio.h>
void swap(int * const arr,int * const brr);                    
int main()
{
	int arr[SIZE] = {1,2,3,4,5},brr[SIZE] = {6,7,8,9,10},i=0;

	printf("before swapping\n");

	for(i=0;i<SIZE;i++)
	{	
		printf("arr[%d] = %d,brr[%d] = %d\n",i,arr[i],i,brr[i]);
	}
	
	void (*fptr)(int *const arr,int *const brr);       //function pointer declartion
	fptr=swap;                                         //assign the swap function to function pointer
	fptr(arr,brr);                                     //function call using fubnction pointer
	printf("after swapping\n"); 
	for(i=0;i<SIZE;i++)
	{	
		printf("arr[%d] = %d,brr[%d] = %d\n",i,arr[i],i,brr[i]);
	}
}

void swap(int * const arr,int * const brr)
{
	int i=0,tmp;
        for(i=0;i<SIZE;i++)
	{
	       	tmp = *(arr+i);
        	*(arr+i) = *(brr+i); 
        	*(brr+i) = tmp;
	}
}
