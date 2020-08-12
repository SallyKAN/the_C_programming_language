#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    if (argc == 1)
    {
        printf("Please enter two filenames");
        return 1;
    }
    while (--argc > 0)
    {
        if ((fp = fopen(*++argv, "r")) == NULL)
        {
            printf("cat: can't open %s\n", *argv);
            return 1;
        }
    }

    return 0;
}
