//Q27 Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 1) return 0;

    for(int i = 0; i < n; i++) {
        sum += (2 * i + 1);
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    getchar();
    getchar();
    return 0;
}