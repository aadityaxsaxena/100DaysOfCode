//Q26 Write a program to print numbers from 1 to n.
#include <stdio.h>
int main() {
    int n;
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 1) return 0;

    printf("Numbers from 1 to %d are:\n", n);
    for(int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    getchar();
    getchar();
    return 0;
}