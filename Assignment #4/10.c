/*
    Created by Kshitiz Wagle, Nov 11, 2020.
*/
/*
    write a program to read two 3 by 3 matrixes, multiply them and 
    display the resulting matrix.
*/
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], pro[3][3];
    int n = 3, sum = 0;
    printf("First matrix\n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("Enter a element in matrix: ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("Second array\n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("Enter a element in matrix: ");
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < n; ++k)
            {
                sum += a[i][k] * b[k][j];
            }
            pro[i][j] = sum;
            sum = 0;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d\t", pro[i][j]);
        }
        printf("\n");
    }
}
