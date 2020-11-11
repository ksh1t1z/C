/*
    Created by Kshitiz Wagle, Nov 11, 2020.
*/
/*
    write a program to read two 3 by 3 matrixes and display 
    the sum matrix of the given matrix.
*/
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], sum[3][3];
    printf("First matrix\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("Enter a element in matrix: ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("Second array\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("Enter a element in matrix: ");
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The sum of first and second matrix is: \n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}