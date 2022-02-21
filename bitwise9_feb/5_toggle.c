#define TOGGLE(x,p) x = x ^ (1 << p)
#include<stdio.h>
int main()
        {
          int x,p;
           printf("enter number and which bit to set");
           scanf("%d%d",&x,&p);
          printf("after toggle %d",TOGGLE(x,p));
        }

