/* 
Write a program that reads text from input.txt, 
converts all lowercase letters to uppercase, and writes the result to output.txt.
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING
*/

#include<stdio.h>
int main()
{
    FILE *input=fopen("info.txt", "r");
    if(input==NULL)
    {
        printf("Error file opening\n");
        return 1;
    }
    FILE *output=fopen("file.txt", "w");
    if(output==NULL)
    {
        printf("Error file opening\n");
        fclose(input);
        return 1;
    }
    int ch;
    while((ch=fgetc(input))!=EOF)
    {
        if(ch>='a' && ch<='z')
        {
            ch=ch-32;
        }
        fputc(ch, output);
    }
    fclose(input);
    fclose(output);
    printf("Converted and saved\n");
    return 0;
}