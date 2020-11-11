/*
    Created by Kshitiz Wagle, Nov 11, 2020.
*/
/*
    write a program to display first 50 fibonacci number 
    using an array.
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < n; ++i)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    printf("The fibonacci numbers upto %dth terms is ", n);
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
}