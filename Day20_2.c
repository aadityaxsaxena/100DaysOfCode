//Q40 Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main()
{
    long long n, r, rev = 0, base = 1;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    while (n != 0)
    {
        r = n % 10;
        if (r == 0)
            r = 1;
        else
            r = 0;
        rev += r * base;
        base *= 10;
        n /= 10;
    }
    printf("1's complement: %lld\n", rev);
    getchar();
    getchar();
    return 0;
}