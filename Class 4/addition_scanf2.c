//C program to perform addition of two numbers
//Single scanf() for multiple input

#include <stdio.h>

int main()
{
    int a, b, sum;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    sum=a+b;

    printf("The sum of %d and %d is %d",a,b,sum);
}

