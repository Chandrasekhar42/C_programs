#include<stdio.h>
int main()
{
    double a,b;
    char op;
    printf(" a-Addition\n s-Subtraction\n m-Multiplication\n d-Division\n");
    printf("Enter the values of a & b: ");
    scanf("%lf %lf",&a,&b);
    printf("Enter your Choice : ");
    scanf("\n%c",&op);
    switch(op)
    {
    case 'a'	:
        printf("Sum of %lf and %lf is : %lf",a,b,a+b);
        break;
    case 'm'	:
        printf("Difference of %lf and %lf is : %lf",a,b,a-b);
        break;
    case 'd'	:
        printf("Multiplication of %lf and %lf is : %lf",a,b,a*b);
        break;
    case 's'	:
        printf("Division of Two Numbers is %lf : ",a/b);
        break;
    default	:
        printf(" deafault case no action:");
        break;
    }
    return 0;
}
