#include <stdio.h>
int main()
{
    int i, a, b, c;
    i = 1;
    b = 1;
    a = 0;
    c = 1;
    do
    {
        printf("%d ", a);
        c =a + b;
        a = b;
        b = c;
        ++i;
    } while (i <= 20);
}
