//Write a C program to compute the area of a circle where r = 10

#include <stdio.h>
#define pi 3.1416
int main()
{
    int r = 10;
    double area;

    area = pi*r*r;

    printf("The area of the circle is %lf",area);

    return 0;
}


