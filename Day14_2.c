//Q28 Write a program to print the product of even numbers from 1 to n 

#include <stdio.h>
int main() {
    int n, product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No even numbers in the range.\n");
        return 0;
    }

    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("Product of even numbers from 1 to %d = %d\n", n, product);
    getchar();
    getchar();
    return 0;
}
