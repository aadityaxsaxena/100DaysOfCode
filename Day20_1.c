//Q39 Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main()
{
    int n, r, product = 1, prog = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        if (r % 2 != 0)
        {
            product *= r;
            prog = 1;
        }
        n /= 10;
    }
    if (prog)
        printf("Product of odd digits: %d\n", product);
    else
        printf("No odd digits found.\n");
    getchar();
    getchar();
    return 0;
}