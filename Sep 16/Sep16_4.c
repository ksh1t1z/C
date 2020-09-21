#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        int x = i;
        for (int j = 1; j <= i; ++j)
        {
            if (x % 2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
            ++x;
        }
        printf("\n");
    }
}