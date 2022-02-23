#include<stdio.h>
#include<string.h>
#define S 10
int main()
{
    char str1[S] = "abcabcddd",str2[S];
    int j=0,i=0,k=0,arr[S];
    for(i=0;i<S;i++)
    {
        int count = 0;
        for(j=i+1;j<S;j++)
        {
            if(str1[j] == str1[i] && str1[j]!=0)
            {
                str1[j] = 0;  
                count++;
            }
            
        }
        
        if(count!=0 )
        {
            arr[k] = count+1;
            str2[k] = str1[i];
            k++;
        }

    }
    for(i=0;i<k;i++)
    {
        printf("%c has frequency %d\n",str2[i],arr[i]);
    }    
        
}
