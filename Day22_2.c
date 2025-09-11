//Q44 Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main() {
    int n;
    float sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n >= 1) {
        sum = 1.0;  // first term is 1
    }
    for (int i = 2; i <= n; i++) {
        sum += (float)(2 * i - 1) / (2 * i);
    }
    printf("Sum of the series up to %d terms: %.2f\n", n, sum);
    getchar();
    getchar();
    return 0;
}