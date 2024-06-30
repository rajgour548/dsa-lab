#include <stdio.h>
void selectionsort(int arr[],int n);
void bubblesort(int arr[],int n);
void insertionsort(int arr[],int n);
int main(){
int n;
int no;
printf("enter no of element:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

do{
    printf("\nEnter your choice:[1]selection sort | [2]bubble sort | [3]insertion sort | [4]Exit-->");
scanf("%d",&no);
    switch(no){
case 1:selectionsort(arr,n);
break;
case 2:bubblesort(arr,n);
break;
case 3:insertionsort(arr,n);
break;
default:printf("invalid choice");
break;
}
}while(no!=4);
return 0;
}
void selectionsort(int arr[],int n){
int passes=0;
int comparisions=0;
int swaps=0;
for(int i=0;i<n-1;i++){
    int minindex=i;
    for(int j=i+1;j<n;j++){
        comparisions++;
        if(arr[j]<arr[minindex]){
            minindex=j;
        }
    }
    if(minindex!=i){
        int temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
        swaps++;
    }
    passes++;
}
printf("Selection sort-->\n");
printf("Sorted array:");
for(int i=0;i<n;i++){
printf("%d,",arr[i]);
}
printf("\nNo. of passes: %d",passes);
printf("\nNo. of comparisions: %d",comparisions);
printf("\nNo. of swaps: %d",swaps);

}
void bubblesort(int arr[],int n){
    int temp;
    int passes=0;
    int comparisions=0;
    int swaps=0;
    for(int i=0;i<n-1;i++){
        passes++;
        for(int j=0;j<n-i-1;j++){
            comparisions++;
            if(arr[j]>arr[j+1]){
               
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                 swaps++;
            }
        }
        
    }
    printf("\nBubble sort-->\n");
printf("Sorted array:");
for(int i=0;i<n;i++){
printf("%d,",arr[i]);
    
    }
     printf("\nNo. of swaps: %d",swaps);
      printf("\nNo. of passes: %d",passes);
printf("\nNo. of comparisions: %d",comparisions);
}

void insertionsort(int arr[], int n) {
    int i, j, key;
    int swaps = 0;        
    int comparisions = 0;  
    int passes = 0;        

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        passes++; 

       
        while (j >= 0 && arr[j] > key) {
            comparisions++; 
            arr[j + 1] = arr[j];
            j = j - 1;
            swaps++;
        }
        if (j >= 0) {
            comparisions++; 
        }
        arr[j + 1] = key;
    }
 printf("\ninsertion sort-->\n");
printf("Sorted array:");
for(int i=0;i<n;i++){
printf("%d,",arr[i]);
}
    
  
    printf("\nNumber of comparisons: %d\n", comparisions);
    printf("Number of passes: %d\n", passes);
      printf("Number of swaps: %d\n", swaps);
}

