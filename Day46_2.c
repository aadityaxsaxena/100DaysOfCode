/*
Find the first repeating lowercase alphabet in a string.
Input 1:
stress
Output 1:
s
*/
#include <stdio.h>
int main()
{
  char str[100];
  int count[26] = {0};
  scanf("%s", str);
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      count[str[i] - 'a']++;
      if (count[str[i] - 'a'] == 2)
      {
        printf("%c\n", str[i]);
        return 0;
      }
    }
  }
  printf("\n");
  return 0;
}