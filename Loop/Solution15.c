//Multiplication Table

#include <stdio.h>

int main()
{
    int counter,n,m;

    printf("Enter n: ");
    scanf("%d",&n);

    for(counter=1; counter<=10; counter++)
    {
        m=counter*n;
        printf("%d * %d = %d\n",n,counter,m);
    }

    return 0;
}


