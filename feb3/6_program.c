/*Write a C program to find first occurrence of a word in a given string.*/
#include<stdio.h>
int mystrstr(char s1[],char s2[]);
#define size 30
int main()
{
	char s1[size],s2[size];
        printf("enter a string 1 cahracters less than %d:",size-1);
        scanf("%[^\n]s",s1);
	printf("enter a string 2 cahracters less than %d:",size-1);
	scanf("\n%[^\n]s",s2);
	int a;
	a=mystrstr(s1,s2);
      printf("%d",a);
	if(a>=0)
		printf("yes it matches:the %s occured at index s1[%d]\n",s2,a);
	else
		printf("no it not matches:\n");
	return 0;
}
int mystrstr(char s1[],char s2[])
{
	int i=0;
	while(s2[i]!=0)
	i++;
	for(int j=0;s1[j]!=0;j++)
	{
		int count=0;
		for(int k=0;k<i;k++)
		{
			if(s1[j+count]==s2[k])
			{
				count++;
			}
		}
		if(count==i)
			return j;
	}
	return -1;
}

			


