/*
    Created by Kshitiz Wagle, Nov 11, 2020.
*/
/*
    write a program to enter n number of data, store them in an 
    array and display the sum of all elements.
*/

#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("\nEnter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        printf("Enter element in array: ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        sum += arr[i];
    }
    printf("The sum of the elements in array is: %d\n", sum);
}