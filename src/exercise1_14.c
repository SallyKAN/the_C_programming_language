#include <stdio.h>
#include <ctype.h>

#define MAXHIST 15  /* max length of historam */
#define MAXCHAR 128 /* max different characters */
#define OUT 0
#define IN 1

int main(int argc, char const *argv[])
{
    int c, i, state;
    // maximum value for wl[]
    int maxvalue;
    int overflow;
    int len;
    int fc[MAXCHAR];

    state = OUT;
    // fc = 0;
    overflow = 0;

    for (i = 0; i < MAXCHAR; ++i)
    {
        fc[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c < MAXCHAR)
        {
            ++fc[c];
        }
    }
    maxvalue = 0;
    for (i = 1; i < MAXCHAR; ++i)
    {
        if (fc[i] > maxvalue)
        {
            maxvalue = fc[i];
        }
    }
    for (i = 1; i < MAXCHAR; ++i)
    {
        if (isprint(i))
        {
            printf("%5d - %c - %5d :", i, i, fc[i]);
        }
        else
        {
            printf("%5d -  - %5d :", i, fc[i]);
        }

        if (fc[i] > 0)
        {
            if ((len = fc[i] * MAXHIST / maxvalue) <= 0)
            {
                len = 1;
            }
        }
        else
        {
            len = 0;
        }

        while (len > 0)
        {
            putchar('*');
            --len;
        }
        putchar('\n');
    }

    return 0;
}
