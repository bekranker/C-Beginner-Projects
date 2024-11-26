#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int wordCounter(char words[])
{
  int counter = 1;
  for (int i = 0; i < strlen(words); i++)
  {
    if (words[i] == ' ')
    {
      counter++;
    }
  }
  return counter;
}

int main()
{
  int count = 0;
  char line[512] = "";
  scanf(" %[^\n]", line);
  printf("The Line is: %s\nIt has %d words in it !!", line, wordCounter(line));
  return 0;
}