/* 
5. Write a program to read the radius of a sphere and compute its surface area and volume.
*/
#include <stdio.h>
#define PI 3.14
int main()
{
    float radius, area, vol;
    printf("Enter the radius of sphere: ");
    scanf("%f", &radius);
    area = 4 * PI * radius * radius;
    vol = 1.33333333333 * PI * radius * radius * radius;
    printf("The surface area of sphere is %.2f and volume is %.2f.\n", area, vol);
}
