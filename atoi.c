// convert s to integer;
int atoi(char s[])
{
    int i, n, sign;
    for (i = 0; s[i] == ' '; i++)
        ;
    sign = s[i] == '-' ? -1 : 1;
    if (s[i] == '-' || '+')
    {
        i++;
    }

    for (n = 0; s[i] >= '0' && s[i] <= '9'; i++)
    {
        n = 10 *n + s[i] - '0';
    }
    return sign * n;
}