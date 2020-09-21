#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            printf("0 ");
        }
        for (int k = 0; k <= 2 * i; ++k)
        {
            printf("1 ");
        }
        for (int j = i; j < n; ++j)
        {
            printf("0 ");
        }
        printf("\n");
    }
}