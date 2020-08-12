#include <string.h>
void reverse(char s[])
{
    reverser(s, 0, strlen(s));
}

void reverser(char s[], int i, int len)
{

    int c, j;
    j = len - i + 1;
    while (i < j)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
        reverser(s, ++i, len);
    }
}