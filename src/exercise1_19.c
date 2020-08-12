#include <stdio.h>

#define MAXLINE 100 /* max length of historam */

int getlines(char line[], int maxline);
void reverse(char s[]);

int main(int argc, char const *argv[])
{
    char line[MAXLINE];

    while (getlines(line, MAXLINE) > 0)
    {
        reverse(line);
        // printf("%s", line);
    }
    return 0;
}

int getlines(char line[], int maxline)
{
    int c, i, j;
    j = 0;
    // for (i = 0; (c = getchar() != EOF) && c != '\n';i++)
    // {
    //     printf("%c", c);
    // }

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    {
        // printf("%c", c);
        if (i < maxline - 2)
        {
            line[j] = c;
            ++j;
        }
    }
    if (c == '\n')
    {
        line[j] = c;
        ++j;
        ++i;
    }
    line[j] = '\0';
    // printf("%d\n", i);
    return i;
}

void reverse(char s[])
{
    int i, j;
    char temp;
    i = 0;

    while (s[i] != '\0')
    {
        ++i;
    }
    // printf("%d\n", i);
    --i;
    // printf("%d\n", i);
    if (s[i] == '\n')
    {
        --i;
    }
    // printf("%d\n", i);
    j = 0;
    while (j < i)
    {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        --i;
        ++j;
    }
}