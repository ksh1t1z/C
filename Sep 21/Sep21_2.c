#include <stdio.h>
int main()
{
    int i, a, b, c;
    i = 1;
    b = 1;
    a = 0;
    c = 0;
    printf("%d ", 0);
    while (i <= 20)
    {
        printf("%d ", b);
        c = a + b;
        a = b;
        b = c;
        ++i;
    }
}
