/*
Count frequency of a given character in a string.
Input 1:
programming
g
Output 1:
2
*/
#include <stdio.h>
int main()
{
  char str[100], ch;
  int i, count = 0;
  scanf("%s", str);
  scanf(" %c", &ch);
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == ch)
    {
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}