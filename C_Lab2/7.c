//do-while loop
#include <stdio.h>
int main()
{
    float n, sum = 0, num, avg = 0;
    printf("\n");
    printf("Enter numbers of terms: ");
    scanf("%f", &n);
    int i = 1;
    do
    {
        printf("Enter a number: ");
        scanf("%f", &num);
        sum = sum + num;
        i++;
    } while (i <= n);
    printf("Sum = %.2f\n", sum);
    avg = sum / n;
    printf("The average of number is %.2f\n", avg);
}
