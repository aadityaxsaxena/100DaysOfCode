//Q23 Write a program to calculate a library fine based on late days.

#include <stdio.h>
int main() {
    int late_days;
    double fine = 0.0;

    printf("Enter the number of late days: ");
    if (scanf("%d", &late_days) != 1) return 0;

    if (late_days < 0) {
        printf("Invalid input. Late days cannot be negative.\n");
    } else if (late_days == 0) {
        printf("No fine. Thank you for returning the book on time!\n");
    } else if (late_days <= 5) {          
        fine = late_days * 2.0;
        printf("The fine is: Rs.%.2f\n", fine);
    } else if (late_days <= 10) {         
        fine = ((late_days * 2) + late_days - 5 * 4.0);
        printf("The fine is: Rs.%.2f\n", fine);
    } else if (late_days <= 30) {         
        fine = ((late_days * 2) + (late_days - 5) * 6.0);
        printf("The fine is: Rs.%.2f\n", fine);
    } else {
        printf("Membership cancelled due to excessive late returns.\n");
    }
    getchar();
    getchar();
    return 0;
}
