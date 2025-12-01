/*
Create an enum for months and print how many days each month has.
Input 1:
FEB
Output 1:
28 or 29 days
Explanation 1:
February has 28 days in a normal year and 29 in a leap year.
*/
#include <stdio.h>
enum Month {
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};
void monthdays(enum Month month) {
    switch (month) {
        case JAN:
            printf("31 days\n");
            break;
        case FEB:
            printf("28 or 29 days\n");
            break;
        case MAR:
            printf("31 days\n");
            break;
        case APR:
            printf("30 days\n");
            break;
        case MAY:
            printf("31 days\n");
            break;
        case JUN:
            printf("30 days\n");
            break;
        case JUL:
            printf("31 days\n");
            break;
        case AUG:
            printf("31 days\n");
            break;
        case SEP:
            printf("30 days\n");
            break;
        case OCT:
            printf("31 days\n");
            break;
        case NOV:
            printf("30 days\n");
            break;
        case DEC:
            printf("31 days\n");
            break;
        default:
            printf("Invalid month\n");
    }
}
int main() {
    int m;
    printf("Month Number = ");
    scanf("%d", &m);
    monthdays((enum Month)m);
    return 0;
}