//C program to perform addition of two numbers
//Multiple scanf for multiple input

#include <stdio.h>

int main()
{
    int a, b, sum;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d",&b);

    sum=a+b;

    printf("The sum of %d and %d is %d",a,b,sum);
}
