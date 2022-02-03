#include<stdio.h>
#include<stdlib.h>
int main()
  {
    int size,*ptr;

    printf("enter the range of sequence:");

    scanf("%d\n",&size);

    ptr = (int *)malloc(sizeof(int)*size);

    int temp = *ptr;
   
    int tmpsize=size; 
   
     while(size>0)
             {
                 scanf("%d",ptr);
                 ptr++;
                 size--;
             }
      ptr = temp;
     while(tmpsize>0)
                {
                   printf("%d",(int *)*ptr);
                     ptr++;
                   tmpsize--;
                }
      
  }
