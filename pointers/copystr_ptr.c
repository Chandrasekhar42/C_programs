#include<stdio.h>
void mycpy(char *dstr,char *str);
int length (char *);
int main()
{
	char str[30] = "Thunder soft pvt lmtd";
	char dstr[30];
        mycpy(dstr,str);
	printf("%s\n",dstr);
        printf("%d\n",length(dstr));
	
}

void mycpy(char *dstr,char *str)
{
	while(*str!='\0')
		{
			*dstr = *str;
			 str++;
			 dstr++;
		}
		*dstr = '\0';
	//	printf("%s",dstr-6);
}

int length (char *str )
{
	int i=0;
	while(*(str++)!='\0')
		{
			i++;
		}
return i;		


}
