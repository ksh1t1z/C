#include <stdio.h>
int main()
{
    int a, b, c;
    b = 1;
    c = 0;
    a = 0;
    printf("%d ", 0);
    for (int i = 1; i <= 20; ++i)
    {
        printf("%d ", b);
        c = a + b;
        a = b;
        b = c;
    }
}