/*
4.	Write a program to input six numbers and print percentages of each numbers and their sum.
*/
#include <stdio.h>
int main()
{
    float a, b, c, d, e, f, sum = 0;
    float per, per1, per2, per3, per4, per5, per6;
    printf("Enter a number: ");
    scanf("%f", &a);
    printf("Enter a number: ");
    scanf("%f", &b);
    printf("Enter a number: ");
    scanf("%f", &c);
    printf("Enter a number: ");
    scanf("%f", &d);
    printf("Enter a number: ");
    scanf("%f", &e);
    printf("Enter a number: ");
    scanf("%f", &f);
    sum = a + b + c + d + e + f;
    per1 = (a / sum) * 100;
    per2 = (b / sum) * 100;
    per3 = (c / sum) * 100;
    per4 = (d / sum) * 100;
    per5 = (e / sum) * 100;
    per6 = (f / sum) * 100;
    printf("The sum is %.2f\n", sum);
    printf("The percentage of each number is: ");
    printf("%.2f%%, %.2f%%, %.2f%%, %.2f%%,\n%.2f%%, and %.2f%%", per1, per2, per3, per4, per5, per6);
    printf(" respectively.");
}