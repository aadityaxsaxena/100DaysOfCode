//Q60 Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            pos++;
        } else if (arr[i] < 0) {
            neg++;
        } else {
            zero++;
        }
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n", pos, neg, zero);
    getchar();
    getchar();
    return 0;
}