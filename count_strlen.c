#include <stdio.h>
#include <string.h>
int main()
{
 char s[1000];
  int c = 0;

  printf("Input a string\n");
  gets(s);

  while (s[c] != EOF)
    c++;

  printf("Length of the string: %d\n", c);

  return 0;
}