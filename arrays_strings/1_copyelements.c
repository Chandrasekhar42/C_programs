 //Write a C program to copy all elements from an array to another array. - char / int - any one
 
#include<stdio.h>
#define SIZE 10
int main()
          {
              int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10},brr[SIZE],i;
               
               for(i=0;i<SIZE;i++)
                  {
                        brr[i] = arr[i];  //copying elements
                  }
          
                for(i=0;i<SIZE;i++)
                  {
                       printf("%d\t",arr[i]);  //displaying elements
                  }
            printf("\n"); 
          }
