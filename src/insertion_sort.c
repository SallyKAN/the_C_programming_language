#include <stdio.h>
#include <string.h>

void insertion_sort(char *s);

int main(int argc, char const *argv[])
{
    /* code */
    char s[10];
    if (fgets(s, 10, stdin) == NULL)
        return 0;
    else
    {
        puts(s);
        insertion_sort(s);
        puts(s);
    }
    return 0;
}

void insertion_sort(char *s)
{
    int n = strlen(s);
    int i, j, key;
    // remove newline char f
    for (j = 1; j < n - 1; j++)
    {
        for (i = j - 1; i >= 0 && s[i] > s[i + 1]; i--)
        {
            key = s[i+1];
            s[i + 1] = s[i];
            s[i] = key;
        }
    }
}
