/*
    Created by ksh1t1z.
    7/10/2020, (dd/mm/yy)
    This is what the program does: x = x - x3/ 3! + x5/ 5! - x7/ 7! +……
    Calculate x waht do you think.
*/

#include <stdio.h>
#include <math.h>
int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    int n = 5, x;
    int a[10], b[10];
    float xin, xin1, xin2;
    xin = 0;
    xin1 = 0;
    xin2 = 0;
    printf("Enter the value of n and x: ");
    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; i += 4)
    {
        a[i] = i;
    }
    for (int i = 1; i <= n; i += 4)
    {
        xin1 = xin1 + (pow(x, a[i])) / fact(a[i]);
    }
    for (int j = 3; j <= n; j += 4)
    {
        b[j] = j;
    }
    for (int j = 3; j <= n; j += 4)
    {
        xin2 = xin2 + (pow(x, b[j])) / fact(b[j]);
        xin2 = xin2 * -1;
    }
    xin = xin1 + xin2;
    printf("The sine value is %.2f", xin);
}
