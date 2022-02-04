//Write a C program to check whether a string is palindrome or not. 
#include<stdio.h>
#include<string.h>
void mystringreverse(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	for(int j=0,k=i-1;j<k;j++,k--)
	{
		char temp;
		temp=str[j];
		str[j]=str[k];
		str[k]=temp;
	}
}

int mystrcmp(char s1[],char s2[])
{
	int i=0;
	while((s1[i]!='\0')&&(s2[i]!='\0')&&(s1[i]==s2[i]))
		i++;
	return (s1[i]-s2[i]);
	
}

int main()
{
   char str[20],str1[20];
   printf("Enter string\n");
   scanf("%s",str);
   strcpy(str1,str);
   mystringreverse(str);
   
   if(mystrcmp(str,str1)==0)
    printf("String is palindrome\n");
   else
     printf("String is not palindrome\n");
    return 0;
}