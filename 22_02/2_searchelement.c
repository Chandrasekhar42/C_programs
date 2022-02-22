/*Write a Cprogram to search an element in array using pointers.
use : macro , const , fn pointer*/

#define SIZE 10                           
#include<stdio.h>
int search(int [],int element);                    
int main()
{
	int arr[SIZE] = {1,2,3,4,5},element;
	printf("elements to be searched:\n");
	scanf("%d",&element);
	int (*fptr)(int [],int );                          //function pointer declartion
	fptr=search;                                      //assign the swap function to function pointer
	if(fptr(arr,element)==0)                          //function call using fubnction pointer
	printf("element found\n");
	else
	printf("element is not found");
	return 0;
	
}

int search(int arr[],int element)
{
	int i=0;
        for(i=0;i<SIZE;i++)
	{
	       	if(*(arr+i) == element)
		return 0;
	}
return 1;
}

