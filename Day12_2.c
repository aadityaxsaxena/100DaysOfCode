//Q24 Write a program to calculate an electricity bill based on units consumed.
#include <stdio.h>
#include <stdio.h>

int main() {
    int units;
    float bill = 0;
    printf("Enter the number of units consumed: ");
    if (scanf("%d", &units) != 1) return 0;

    if(units <= 50) {
        bill = units * 5;
    } else if(units <= 150) {
        bill = 50 * 5 + (units - 50) * 7;
    } else {
        bill = 50 * 5 + 100 * 7 + (units - 150) * 12.5;
    }

    printf("the Electricity Bill is: Rs.%.2f\n", bill);

    getchar();
    getchar();
    return 0;
}