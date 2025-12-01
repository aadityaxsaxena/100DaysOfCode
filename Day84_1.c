/*
Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
Input 1:
FAILURE
Output 1:
Operation failed
Explanation 1:
FAILURE corresponds to a failed operation message
*/
#include <stdio.h>
#include <string.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

void printStatus(Status s) {
    switch (s) {
        case SUCCESS:
            printf("Operation succeeded\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Unknown status\n");
    }
}
int main() {
    char input[20];
    printf("Enter status (SUCCESS / FAILURE / TIMEOUT): ");
    scanf("%s", input);
    if (strcmp(input, "SUCCESS") == 0) {
        printStatus(SUCCESS);
    }
    else if (strcmp(input, "FAILURE") == 0) {
        printStatus(FAILURE);
    }
    else if (strcmp(input, "TIMEOUT") == 0) {
        printStatus(TIMEOUT);
    }
    else {
        printf("Invalid status entered\n");
    }
    return 0;
}