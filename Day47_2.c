/*
Find the longest word in a sentence.
Input 1:
I love programming
Output 1:
programming
*/
#include <stdio.h>
int main()
{
  char str[100], longest[100], word[100];
  int i = 0, j = 0, max_len = 0, len = 0;
  fgets(str, sizeof(str), stdin);
  while (1)
  {
    if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
    {
      word[j++] = str[i];
    }
    else
    {
      if (j > max_len)
      {
        max_len = j;
        word[j] = '\0';
        int k;
        for (k = 0; k <= j; k++)
        {
          longest[k] = word[k];
        }
      }
      j = 0;
    }
    if (str[i] == '\0' || str[i] == '\n')
    {
      break;
    }
    i++;
  }
  printf("%s\n", longest);
  return 0;
}