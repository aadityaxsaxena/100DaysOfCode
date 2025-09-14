//Q49 Write a program to print the following pattern:
#include <stdio.h>
int main() {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) {
        for (j = i; j <= rows; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    getchar();
    getchar();
    return 0;
}