/*
    Created by Kshitiz Wagle, Nov 11, 2020.
*/
/*
    Write a program to enter n number of data, store them in 
    an array and display the largest element and smallest element.
*/
#include <stdio.h>
int main()
{
    int n, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The largest number is %d & smallest number is %d", arr[0], arr[n - 1]);
}