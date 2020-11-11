/*
    Created by Kshitiz Wagle, Nov 11, 2020.
*/
/*
    write a program to enter n number of data, store them in an 
    array and display the sum of all even number elements
*/
#include <stdio.h>
int main()
{
    int n, sum = 0;
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
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    printf("The sum of all even numbers in array is %d", sum);
}