/*
    Created by Kshitiz Wagle, Nov 11, 2020.
*/
/*
    write a program to read two array of size 10 
    (a[10] and b[10]) and calculate the sum of corresponding 
    elements and store them in other array c[10]. 
    {for example a[10] = {1,2,3,4,5,6,7,8,9,10} + 
    b[10] = {1,2,3,4,5,6,7,8,9,10} c = a + b
*/
#include <stdio.h>
int main()
{
    int a[10], b[10], c[10];
    printf("\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("Enter elements in 1st array: ");
        scanf("%d", &a[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("Enter elements in 2nd array: ");
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 10; ++i)
    {
        c[i] = a[i] + b[i];
    }
    printf("\n");
    printf("The corresponding elements of array added are: ");
    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
}