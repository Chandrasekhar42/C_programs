#include<stdio.h>
#define BITS sizeof(int) * 8
 int main()
      {
          int num,msb;
          printf("enter the number:");
          scanf("%d",&num);
          printf("%lu",BITS);
          msb = num & (1 << (BITS-1));
          if(msb)
           printf("msb is 1");
          else
            printf("msb bit is 0");
     }
