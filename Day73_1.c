/*
Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2
Explanation 1:
The file has 31 characters including spaces and newlines, 5 words, and 2 lines.
*/

#include <stdio.h>
int main(){
    FILE *file=fopen("info.txt","r");
    if(file==NULL){
        printf("Error opening file\n");
        return 1;
    }
    char ch;
    int cha=0,words=0,lines=0;
    while((ch=fgetc(file))!=EOF){
        cha++;
        if(ch==' ' || ch=='\n'){
            words++;
        }
        if(ch=='\n'){
            lines++;
        }
    }
    if(cha>0){
        words++;
        lines++;
    }
    fclose(file);
    printf("Characters: %d\nWords: %d\nLines: %d\n",cha,words,lines);
    return 0;
}