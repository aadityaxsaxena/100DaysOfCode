/*
Reverse a string.
Input 1:
abcd
Output 1:
dcba
*/
#include <stdio.h>
int main()
{
  char str[1000];
  int i, len = 0;
  fgets(str, sizeof(str), stdin);
  while (str[len] != '\0' && str[len] != '\n')
  {
    len++;
  }
  for (i = 0; i < len / 2; i++)
  {
    char temp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = temp;
  }
  printf("%s", str);
  return 0;
}