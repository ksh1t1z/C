/*
    Created by Kshitiz Wagle, Nov 11, 2020.
*/
/*
    write a program to read a 5 by 5 matrix and display the content
    of the matrix and also display the sum of all elements of 
    matrix and also display the sum of all elements except the
    diagonal element of a matrix.
*/
#include <stdio.h>
int main()
{
    int arr[5][5], sum = 0, sumd = 0;
    int n = 5;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("Enter a number: ");
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i != j)
            {
                sum += arr[i][j];
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {

            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nThe sum of elements is: %d", sum);
}