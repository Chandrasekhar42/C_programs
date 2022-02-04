/*Write a C program to count frequency of each element in an array.*/
#include <stdio.h>  
   
int main() {  
    int inputArray[100], countArray[100];  
    int elementCount, i, j, count;  
   
    printf("Enter Number of Elements in Array\n");
    scanf("%d", &elementCount);
    printf("Enter %d numbers\n", elementCount);
     
    /* Read array elements */
    for(i = 0; i < elementCount; i++){
        scanf("%d", &inputArray[i]);
        countArray[i] = -1;
    }
   
    /* 
     * for any element inputArray[i], If countArray[i] = -1, 
     * that means frequency is not counted for this number yet 
     * and countArray[i] = 0 means frequency is already 
     * counted for this number.
     */ 
    for(i = 0; i < elementCount; i++) {  
        count = 1;  
        for(j = i+1; j < elementCount; j++) {  
            if(inputArray[i]==inputArray[j]) {
                countArray[j] = 0;    
                count++;
            }  
        }  
        if(countArray[i]!=0) {  
            countArray[i] = count;  
        }  
    }  
   
    /* Print count of each element */   
    for(i = 0; i<elementCount; i++) {  
        if(countArray[i] != 0) {  
            printf("Element %d : Count %d\n", inputArray[i], countArray[i]);  
        }  
    }  
   
    return 0;  
}  