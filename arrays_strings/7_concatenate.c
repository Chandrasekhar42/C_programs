#include<stdio.h>
void myconcatenate(char name1[],char name2[]);
#define size 60
int main()
{
	char name1[size],name2[size];
	printf("enter name1:");
	scanf("%[^\n]s",name1);
	printf("enter name2:");
	scanf("\n%[^\n]s",name2);
	myconcatenate(name1,name2);
	printf("after concatenation:%s\n",name1);
	return 0;
}
void myconcatenate(char name1[],char name2[])
{
	int i=0,j=0;
	while(name1[i]!='\0')
	{
		i++;
        }
	while(name2[j]!='\0')
	{
	     name1[i]=name2[j];
	     i++;
	     j++;
	}
}

