#include <stdio.h>
int main()
{
    int i, a, b, c;
    i = 1;
    b = 1;
    a = 0;
    c = 0;
    do
    {
        printf("%d ", a);
        a = b + c;
        b = c;
        c = a;
        ++i;
    } while (i <= 20);
}