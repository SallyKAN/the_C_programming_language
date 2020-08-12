#define YES 1
#define NO 0

int htoi(char s[])
{
    int hdigit, i, ishex, n;

    i = 0;
    if (s[i] == '0')
    {
        ++i;
        if (s[i] == 'x' || s[i] == 'X')
        {
            ++i;
        }
    }

    n = 0;
    ishex = YES;
    for (; ishex = YES; ++i)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            hdigit = s[i] - '0';
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            hdigit = s[i] - 'a' + 10;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            hdigit = s[i] - 'A' + 10;
        }
        else
        {
            ishex = NO;
        }
        if (ishex = YES)
        {
            n = n * 16 + hdigit;
        }
    }
    return n;
}
