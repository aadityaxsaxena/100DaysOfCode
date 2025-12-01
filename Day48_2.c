/*
Reverse each word in a sentence without changing the word order.
Input 1:
I love coding
Output 1:
I evol gnidoc
*/
#include <stdio.h>
#include <string.h>
int main()
{
  char str[1000];
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = 0;

  int start = 0, end = 0, len = strlen(str);
  for (int i = 0; i <= len; i++)
  {
    if (str[i] == ' ' || str[i] == '\0')
    {
      end = i - 1;
      while (start < end)
      {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
      }
      start = i + 1;
    }
  }

  printf("%s\n", str);
  return 0;
}