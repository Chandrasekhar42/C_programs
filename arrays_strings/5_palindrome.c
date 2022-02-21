#include<stdio.h>
int mystrpal(char str[]);
int main()
{
	char str[30];
	printf("enter the string:");
	scanf("%[^\n]s",str);
     
	if(mystrpal(str))
        {
           printf("The given string is palindrome\n");
        }
	else
        {
           printf("The given string is not a palindrome\n");
        }

}


int mystrpal(char str[])
{
	int i=0,j=0,temp=0,count=0;
	while(str[i]!='\0')
	i++;
	temp = i;
	for(j=i-1,i=0;i<j;i++,j--)
	{
		if(str[i]==str[j])
		{
         	  count++;
		}
		else
		{
	 	  break;
		}
	}
	if(count == j)
        return 1;
	else
	return 0;

}
        
 
