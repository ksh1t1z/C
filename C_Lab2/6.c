/*
6.	Write a program to display the numbers from 1 to 100 and sum of 
them using for, While and do...while loops.
*/
#include <stdio.h>
int main()
{
    int i = 1, j = 1, sum = 0, sum1 = 0;
    printf("\nWhile loop below\n");
    while (i <= 100)
    {
        printf("%d ", i);
        sum = sum + i;
        i++;
    }
    printf("\nSum from while loop : %d\n", sum);
    printf("Do-While loop below\n");
    do
    {
        printf("%d ", j);
        sum1 = sum1 + j;
        j++;
    } while (j <= 100);
    printf("\nSum from do-while loop: %d\n", sum1);
}
