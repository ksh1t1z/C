/*
    watched Joma Tech's video, tried to take his code and 
    write it in C.
    Used root tho :P
    Got random generation code from stack overflow,
    idk if it generates random number uniformly   
    thank you anonymours, pyhton has it easier, 
    wrote in C for speed i guess.
    idk if its any faster than in python, I'm a beginner and noob.
    Writing this for fun
*/
/*
    Suppose you have a function called idk, random, 
    that generates a random number from 0 - 1 and 
    is evenly distributed. Find π.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    int n;
    printf("What would you like n to be?\n-> ");
    scanf("%d", &n);
    float distance;
    float num_point_circle = 0;
    float num_point_total = 0;
    int i;
    double x, y, result;
    srand((unsigned)time(NULL));
    for (i = 0; i < n; i++)
    {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;
        float z;
        z = pow(x, 2) + pow(y, 2);
        distance = sqrt(z);
        if (distance <= 1)
        {
            num_point_circle += 1;
        }
        num_point_total += 1;
    }
    result = 4 * num_point_circle / num_point_total;
    printf("π = %.2lf", result);
}

// Damn this is long in C, compared to python I mean
