//Q55 Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        int isPrime = 1; 
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    getchar();
    getchar();  
    return 0;
}