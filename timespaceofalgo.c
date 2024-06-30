#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
               
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


double measureTime(int arr[], int n) {
    clock_t start, end;
    start = clock();
    bubbleSort(arr, n);
    end = clock();
    return ((double)(end - start)) ;
}


size_t estimateSpace(int n) {
    return sizeof(int) * n;  
}

int main() {
    int inputSizes[] = {1000, 2000, 5000, 10000};  
    int numSizes = sizeof(inputSizes) / sizeof(inputSizes[0]);

    printf("Input Size\tTime (s)\tSpace (bytes)\n");

    for (int i = 0; i < numSizes; i++) {
        int n = inputSizes[i];
        int* arr = (int*)malloc(n * sizeof(int));

        
        for (int j = 0; j < n; j++) {
            arr[j] = rand() % 10000;
        }

        
        double timeTaken = measureTime(arr, n);

        
        size_t spaceUsed = estimateSpace(n);

        printf("%d\t\t%.6f\t\t%zu\n", n, timeTaken, spaceUsed);

        
        free(arr);
    }

    return 0;
}
