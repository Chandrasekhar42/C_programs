#include<stdio.h>
int main()
{
int i,sum=0;
for(i = 0 ;i < 10; i++)
  {
   
   int num;
 
   printf("enter the %d number:",i);
   scanf("%d",&num);
   
   if(num == 0)
        break;
    
    if(num <= 0)
      continue;
     sum = sum + num;
   }
printf("sum of number is %d\n",sum);

}
