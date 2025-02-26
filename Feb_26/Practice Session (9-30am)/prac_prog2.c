/*Write a C program to read three decimal numbers a, b, and h from the user and calculate the area of a trapezium.*/

#include <stdio.h>

int main()
{
    double a, b, h,result;

    printf("Enter a,b,h separated by space: ");
    scanf("%lf %lf %lf",&a,&b,&h);

    result = 0.5*(a+b)*h;

    printf("The area of the trapezium is: %lf",result);


}
