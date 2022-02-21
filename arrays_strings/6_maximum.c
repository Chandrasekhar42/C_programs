#include<stdio.h>
int main()
	{
		int arr[30]={0,1,1,2,3,47,8,99,29},i=0,big=0,small=0;
  		big = arr[0];
                small = arr[0];
		for(i=0;i<30;i++)
		{
			if(big < arr[i])
                        big = arr[i];
                        
			if(small > arr[i])
			small = arr[i];
		}
		printf("big = %d",big);
		printf("small = %d",small);

	}
