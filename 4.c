//  Write a program to calculate simple interest for a set of values representing principal,
// number of years, and rate of interest.

#include <stdio.h>

int main()
{
    float p = 2000;
    float y = 2;
    float r = 10;
    printf("SI: %f", (p * y * r) / 100);
    return 0;
}
