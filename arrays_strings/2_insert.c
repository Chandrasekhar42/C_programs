//Write a C program to insert and delete  an element in an array at specified position -
// write fns  insert(n) , delete(n), get(n) where  n is specfied position taken from user

#include<stdio.h>
#define SIZE 10
void insert (int arr[],int position,int num);
int main()
      {
	int arr[SIZE] = {1,2,3,4,5,6,7,8,9};
	int capacity = sizeof(arr)/sizeof(arr[0]);
        insert(arr,4,11);        
        return 0;
      }
 
void insert(int arr[],int position,int num)
      {
	 int i = SIZE-1;
         for(i;i>position-1;i--)
		{
                       arr[i] = arr[i-1];
                }
         arr[position-1] = num;
         printf("after inserting the element:");
                 
	 for(i=0;i<SIZE;i++)
		{
                 	printf("%d\t",arr[i]);
        
                  	printf("\n");
      		}
	}



