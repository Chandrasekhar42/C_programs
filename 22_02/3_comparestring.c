 /*Write a C program to compare two strings using pointers.
use : macro , const , fn pointer */

#define SIZE 10                           
#include<stdio.h>
int compare(char * const arr,char * const brr);                    
int main()
{
	char arr[SIZE] = "chandu",brr[SIZE] = "chandu";
	int c =0;
	int (*fptr)(char *const arr,char *const brr);       //function pointer declartion
	fptr = &compare;                                         //assign the swap function to function pointer
	c = fptr(arr,brr);                                     //function call using fubnction pointer
	if(c == 0)
	printf("both the strings are equal\n");
	else if(c > 0)
	printf("string 1 is greater than string 2\n");
	else
	printf("string 1 is less than string 2\n");
}

int compare(char * const arr,char * const brr)
{
	int i =0,count=0;
	
        while(*(arr+i)!='\0' && *(brr+i)!='\0')
	{
		if( *(arr+i) == *(brr+i) ) 
		i++;
		else
		break;
	}
	if(*(arr+i)=='\0' && *(brr+i)=='\0')
	return 0;
        else
	return (*(arr+i) - *(brr+i));
}
