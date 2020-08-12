#include <stdio.h>

void swap(int x, int y);
void swap_pointer(int *x, int *y);
int main(int argc, char const *argv[])
{

    int a = 2;
    int b = 3;
    printf("Before: a=%d,b=%d\n", a, b);
    swap(a, b);
    printf("After: a=%d,b=%d\n", a, b);
    swap_pointer(&a, &b);
    printf("After: a=%d,b=%d\n", a, b);
    return 0;
}
void swap(int x, int y)
{
    int temp;
    /* WRONG */
    temp = x;
    x = y;
    y = temp;
}

void swap_pointer(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}