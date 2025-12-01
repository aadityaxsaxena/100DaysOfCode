/*
Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
Input 1:
GUEST
Output 1:
Welcome Guest!
Explanation 1:
Enum value determines which message is displayed.
*/
/*
Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
Input 1:
GUEST
Output 1:
Welcome Guest!
*/

#include <stdio.h>
#include <string.h>

typedef enum {
    ADMIN,
    USER,
    GUEST
} URole;
void printMessage(URole role) {
    switch(role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Unknown Role!\n");
    }
}
int main() {
    char input[20];
    URole role;
    scanf("%s", input);
    if (strcmp(input, "ADMIN") == 0) {
        role = ADMIN;
    } 
    else if (strcmp(input, "USER") == 0) {
        role = USER;
    } 
    else if (strcmp(input, "GUEST") == 0) {
        role = GUEST;
    } 
    else {
        printf("Unknown Role!\n");
        return 0;
    }
    printMessage(role);
    return 0;
}