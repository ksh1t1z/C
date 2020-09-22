#include <stdio.h>
int main()
{
    int i, a, b, c;
    i = 1;
    b = 1;
    a = 0;
    c = 1;
    while (i <= 20)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
        ++i;
    }
}
