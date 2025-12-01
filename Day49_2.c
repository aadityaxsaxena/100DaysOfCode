/*
Print initials of a name with the surname displayed in full.
Input 1:
John David Doe
Output 1:
J.D. Doe
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    int i = 0;
    int start = 0;
    int len = strlen(name);
    int last_space = -1;

    for (i = 0; i < len; i++) {
        if (name[i] == ' ')
            last_space = i;
    }

    i = 0;
    while (i < len) {
        if (i == 0 || name[i - 1] == ' ') {
            if (i > last_space) {
                break;
            }
            printf("%c.",name[i]);
        }
        i++;
    }

    for (i = last_space; i < len; i++) {
        printf("%c", name[i]);
    }

    printf("\n");
    return 0;
}