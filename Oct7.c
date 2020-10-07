/*
    Created by Kshitiz Wagle.
    7/10/2020, (dd/mm/yy)
    This is what the program does: x = x - x3/ 3! + x5/ 5! - x7/ 7! +……
    Calculate x waht do you think.
*/

#include <stdio.h>
#include <math.h>
double fact(double n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    double n = 5, x;
    int a[10], b[10];
    float xin, xin1, xin2;
    xin = 0;
    xin1 = 0;
    xin2 = 0;
    printf("Enter the value of n and x: ");
    scanf("%lf %lf", &n, &x);
    for (int i = 1; i <= n; i += 4)
    {
        a[i] = i;
    }
    for (int i = 1; i <= n; i += 4)
    {
        xin1 = xin1 + pow(x, a[i]) / fact(a[i]);
        printf("Xin1 %f %d\n", xin1, i);
    }
    printf("Here %.2f\n", xin1);
    for (int j = 3; j <= n; j += 4)
    {
        b[j] = j;
    }
    for (int j = 3; j <= n; j += 4)
    {
        xin2 = xin2 + pow(x, b[j]) / fact(b[j]); 
        printf("Xin here %f %d\n", xin2, j * -1);
    }
    printf("\nAnd here %.2f", xin2);
    xin = xin1 + (xin2 * -1); // for 2^n element being neagtive, indexing from 1
    printf("\nThe sine value is %.2f", xin);
}
