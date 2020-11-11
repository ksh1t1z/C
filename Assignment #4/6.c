/*
    Created by Kshitiz Wagle, Nov 11, 2020.
*/
/*
    write a program to read two array of size 10 (a[10] and b[10]) 
    and concadinate them and store them in other array c[20]
*/
#include <stdio.h>
int main()
{
    int a[10], b[10], c[20] = {0};
    int n = 10;
    printf("\nFirst array\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("Enter a number: ");
        scanf("%d", &a[i]);
    }
    printf("\nSecond array\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("Enter a number: ");
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 10; ++i)
    {
        c[i] = a[i];
        c[i + n] = b[i];
    }
    printf("\nThe concatenated array is ");
    for (int i = 0; i < 20; ++i)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
}