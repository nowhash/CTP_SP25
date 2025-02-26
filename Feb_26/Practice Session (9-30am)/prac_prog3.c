/*Write a C program to read decimal r and h from user and calculate the volume of a Cylinder.*/

#include <stdio.h>
#define pi 3.1416

int main()
{
    double r, h,result;

    printf("Enter r and h separated by space: ");
    scanf("%lf %lf",&r, &h);

    result = pi*r*r*h;

    printf("The volume of the cylinder is: %lf",result);


}
