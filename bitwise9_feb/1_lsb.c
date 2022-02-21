#include<stdio.h>
int main()
       {
         int num,lsb;
         printf("enter a number");
         scanf("%d",&num);
         lsb = num & 1;
         printf("the lsb of the number is %d",lsb);
            
        }
