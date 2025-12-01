
/*
Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
Explanation 1:
Output File (data.txt after execution): Hello world\nThis is appended text.
*/

#include <stdio.h>
int main(){
    FILE *file;
    char input[256];
    file = fopen("info.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("New Text = ");
    fgets(input, sizeof(input), stdin);
    fputs(input, file);
    fclose(file);
    printf("Text Appended\n");
    return 0;
}
