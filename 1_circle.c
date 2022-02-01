//program to find area and circumfrence of a circle

#include<stdio.h>
int main()
{
     int r;
     float cir,area;
     printf("Enter Radius : ");
     scanf("%d",&r);
     cir=2*3.14*r;
     area=3.14*r*r;
     printf("\nCircumference of Circle = %.2f",cir);
    printf("\nArea of Circle = %.2f\n",area);
     return 0;
}
