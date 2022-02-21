#define CLEAR(x,p) x = x & ~( 0X01 << p)
#include<stdio.h>
int main()
        {
             int x=0,p=0;
            printf("enter the number and which bit is to clear:");
            scanf("%d%d",&x,&p);
            CLEAR(x,p);
           printf("after clearing %d",x);
        }
