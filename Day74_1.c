/*
Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt
Explanation 1:
Expected File (destination.txt): Learning C File Handling
*/

#include<stdio.h>
int main(){
    char sfile[100], dfile[100];
    FILE *src, *dest;
    printf("source filename = ");
    scanf("%s", sfile);
    printf("destination filename = ");
    scanf("%s", dfile);
    src = fopen(sfile, "r");
    if (src == NULL) {
        printf("Error opening source file\n");
        return 1;
    }
    dest = fopen(dfile, "w");
    if (dest == NULL) {
        printf("Error opening destination file\n");
        fclose(src);
        return 1;
    }
    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    printf("File copied to %s\n", dfile);
    fclose(src);
    fclose(dest);
    return 0;
}