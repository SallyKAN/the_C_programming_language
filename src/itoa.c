#include <stdio.h>

int main(int argc, char const *argv[])
{
    char s[100];
    itoa_test(-1234, s);
    printf("%s\n", s);
    return 0;
}

void itoa_test(int n, char s[])
{
    static int i;
    if (n < 0)
    {
        i = 0;
        s[i++] = '-';
        n = -n;
    }
    if (n / 10)
    {
        itoa_test(n / 10, s);
    }
    s[i++] = n % 10 + '0';
    s[i] = '\0';
}