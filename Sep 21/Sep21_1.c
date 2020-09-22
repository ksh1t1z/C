#include <stdio.h>
int main()
{
    int a, b, c;
    b = 1;
    c = 1;
    a = 0;
    printf("%d ", 0);
    for (int i = 1; i <= 20; ++i)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
