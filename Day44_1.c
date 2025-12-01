/*
Count spaces, digits, and special characters in a string.
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1
*/
#include <stdio.h>
int main()
{
  char str[1000];
  int spaces = 0, digits = 0, special = 0;
  fgets(str, sizeof(str), stdin);
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == ' ')
    {
      spaces++;
    }
    else if (str[i] >= '0' && str[i] <= '9')
    {
      digits++;
    }
    else if ((str[i] >= '!' && str[i] <= '/') || (str[i] >= ':' && str[i] <= '@') || (str[i] >= '[' && str[i] <= '`') || (str[i] >= '{' && str[i] <= '~'))
    {
      special++;
    }
  }
  printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
  return 0;
}