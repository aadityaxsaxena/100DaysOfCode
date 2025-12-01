/*
Check if a string is a palindrome.
Input 1:
madam
Output 1:
Palindrome
Input 2:
hello
Output 2:
Not palindrome
*/
#include <stdio.h>
int main(){
    char str[1000];
    int i, len = 0, flag = 1;
    scanf("%s", str);
    while (str[len] != '\0') {
        len++;
    }
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    return 0;
}