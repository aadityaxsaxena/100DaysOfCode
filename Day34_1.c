//Q67 Insert an element in an array at a given position.

#include <stdio.h>
int main() {
    int n, arr[100], pos, elem;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &pos, &elem);
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = elem;
    n++;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    getchar();
    getchar();
    return 0;
}