//Q31 Search for an element in an array using linear search.
#include <stdio.h>
int main() {
    int n, a;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &a);
    int found = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            found = i;
            break;
        }
    }
    if (found != -1)
        printf("Found at index %d\n", found);
    else
        printf("-1\n");
    getchar();
    getchar();
    return 0;
}