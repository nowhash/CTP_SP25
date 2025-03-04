#include <stdio.h>

int main()
{
    int x;
    double result;

    printf("Enter x: ");
    scanf("%d",&x);

    result =3*pow(x,4)+2*sqrt(x)-2;

    printf("The result is %lf",result);
}
