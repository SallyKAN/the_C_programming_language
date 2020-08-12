#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    printf("signed char min = %d\n",SCHAR_MIN);
    printf("signed char max = %d\n",SCHAR_MAX);
    printf("signed short min = %d\n",SHRT_MIN);
    printf("signed short max = %d\n",SHRT_MAX);
    printf("signed int min = %d\n",INT_MIN);
    printf("signed int max = %d\n",INT_MAX);
    printf("signed long min = %ld\n",LONG_MIN);
    printf("signed long max = %ld\n",LONG_MAX);
    return 0;
}
