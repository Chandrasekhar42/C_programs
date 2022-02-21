#include<stdio.h>
#define SET(x,p) x = x | (0x1<<p)
int main()
       {
          int x,p;
          printf("enter the number and which bit to set:");
          scanf("%d%d",&x,&p);
          SET(x,p);
          printf("after setting %d",x);
        }
