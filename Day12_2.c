//Q24 Write a program to calculate an electricity bill based on units consumed.
#include <stdio.h>
int main() {
    int units;
    float bill = 0;
    printf("Enter the number of units consumed: ");
    if (scanf("%d", &units) != 1) return 0;

    if(units <= 100) {
        bill = units * 5;
    } else if(units <= 200) {
        bill = 100 * 5 + (units - 100) * 7;
    } else if(units <= 300) {
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    } else {
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
    }

    printf("The Electricity Bill is: Rs.%.2f\n", bill);

    getchar();
    getchar();
    return 0;
}
