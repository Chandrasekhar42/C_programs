#include <stdio.h>
void swap(void *a,void *b)
{
    *(int *)a = ( *(int *)a) * (*(int *)b );
    *(int *)b = *(int *)a / *(int *)b;
    *(int *)a = *(int *)a / *(int *)b;
    printf("After swap : A =%d,B=%d\n",*(int*)a,*(int*)b);

    return ;
}
int main()
{
    int a=10,b=20;
    printf("Before swap : A = %d , B =%d\n",a,b);
    swap(&a,&b);
   // printf("After swap : A =%d,B=%d\n",*(int*)a,*(int*)b);
    return 0;
}
