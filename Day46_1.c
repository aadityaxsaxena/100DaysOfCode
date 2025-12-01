/*
Remove all vowels from a string.
Input 1:
education
Output 1:
dctn
*/
#include <stdio.h>
int main()
{
  char str[1000];
  int i;
  fgets(str, sizeof(str), stdin);
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
        str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
    {
      putchar(str[i]);
    }
  }
  return 0;
}