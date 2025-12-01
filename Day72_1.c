/*
Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23
Explanation 1:
The program reads each line from info.txt using fgets() and prints it until EOF.
*/

#include <stdio.h>
int main(){
    FILE *file;
    char a[256];
    file = fopen("info.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return -1;
    }
    while (fgets(a, sizeof(a), file) != NULL) {
        printf("%s", a);
    }
    fclose(file);
    return 0;
}