/*
    Created by Kshitiz Wagle, Nov 11, 2020.
*/
/*
     write a program to read a 4 by 4 matrix and display the 
     transpose matrix of the given matrix.
*/
#include <stdio.h>
int main()
{
    int arr[4][4], transpose[4][4];
    int n = 4;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("Enter a number: ");
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The entered matrix is:\n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            transpose[i][j] = arr[j][i];
        }
    }
    printf("\nThe transpose of matrix is:\n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
}