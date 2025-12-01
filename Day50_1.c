/*
Change the date format from dd/04/yyyy to dd-Apr-yyyy.
Input 1:
15/04/2025
Output 1:
15-Apr-2025
*/
#include <stdio.h>

int main() {
    char date[11];   

    scanf("%s", date);

    if (date[3] != '0' || date[4] != '4') {
        printf("Invalid\n");
        return 0;
    }

    printf("%c%c-Apr-%c%c%c%c\n",
           date[0], date[1],
           date[6], date[7], date[8], date[9]);

    return 0;
}