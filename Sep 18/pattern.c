#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 128; i *= 2)
    {
        for (j = 1; j <= i; j *= 2)
        {
            if (j % 2 == 0)
                printf("%d ", i / j);
            else
                printf("%d ", i);
        }
        printf("\n");
    }
}