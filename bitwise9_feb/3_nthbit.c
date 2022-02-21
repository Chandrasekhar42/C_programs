#define GETSTATUS(x,p) x & (0x1 << p)
#include<stdio.h>
int main()
      {
           int x,p;
           printf("enter the number and position (0-31) to get status");
           scanf("%d%d",&x,&p);
           if(GETSTATUS(x,p))
          printf("status of bit 1");
          else
            printf("status of bit 0");

      }
