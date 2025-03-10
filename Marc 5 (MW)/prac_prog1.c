#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    double result;

    printf("Enter x, y: ");
    scanf("%d %d",&x,&y);

    result = pow(x,3)+cbrt(x*y);

    printf("The results is %lf", result );


    return 0;
}
