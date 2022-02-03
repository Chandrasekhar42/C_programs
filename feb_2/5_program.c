#include<stdio.h>
int main()
 {
      int i=0;
      printf("even numbers are:"); 
       for(i=0;i<100;i++)
          {
           if(i%2==0)
            printf("%d\t",i);
          }
      
      printf("\nodd numbers are:");

         for(i=0;i<100;i++)
             {
              if(i%2!=0)
               printf("%d\t",i);
             }
printf("\n");
 }
