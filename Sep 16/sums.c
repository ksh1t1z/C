/* when teacher asks you to do another method */
#include <stdio.h>
int type1()
{
    int sumOdd = 0, sumEven = 0;
    for (int i = 0; i <= 100 * 2; ++i)
    {
        if (i % 2 == 0)
        {
            sumEven += i;
        }
        else if (i % 2 != 0)
        {
            sumOdd += i;
        }
    }
    printf("\tThe sum of first 100 even numbers is %d.\n", sumEven);
    printf("\tThe sum of first 100 odd numbers is %d.\n", sumOdd);
}
int type2()
{
    int sumOdd = 0, sumEven = 0;
    for (int i = 0; i <= 100 * 2; i += 2)
    {
        sumEven += i;
    }
    for (int i = 1; i <= 100 * 2; i += 2)
    {
        sumOdd += i;
    }
    printf("\tThe sum of first 100 even numbers is %d.\n", sumEven);
    printf("\tThe sum of first 100 odd numbers is %d.\n", sumOdd);
}
int main()
{
    printf("Method 1..\n");
    type1();
    printf("Method 2..\n");
    type2();
}