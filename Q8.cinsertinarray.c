#include <stdio.h>  
#include <stdlib.h>  
  
int main() {  
    int size = 10;  
    int myArray[size];  
    int newElement = 5;  
    myArray[size] = newElement;  
    size++;  
    for(int i=0;i<size;i++)  
    printf("%d ",myArray[i]);  
    return 0;  
}  