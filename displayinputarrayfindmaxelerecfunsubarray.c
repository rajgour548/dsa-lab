#include <stdio.h>
int findMax(int arr[], int low, int high) {
    if (low == high) {
        return arr[low];
    }
    int mid = (low + high) / 2;
    int max1 = findMax(arr, low, mid);
    int max2 = findMax(arr, mid + 1, high);
    return (max1 > max2) ? max1 : max2;
}
int main() {
    int arr[] = {3, 15, 7, 1, 20, 9, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Input array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int maxElement = findMax(arr, 0, n - 1);
    printf("Maximum element in the array: %d\n", maxElement);

    return 0;
}
