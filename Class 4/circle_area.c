//C program to compute the area of a circle

#include <stdio.h>
#define pi 3.1416

int main()
{
    double r, area;

    printf("Enter the radius: ");
    scanf("%lf",&r);

    area = pi*r*r;

    printf("Result =  %lf",area);

    return 0;
}
