//Q66 Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
void insertSorted(int arr[], int n, int value) {
    int i = n - 1;
    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = value;
}
int main() {
    int arr[100] = {1, 2, 4, 5, 6};
    int n = 5; 
    int value = 3;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    insertSorted(arr, n, value);
    n++; 
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    getchar();
    getchar();
    return 0;
}