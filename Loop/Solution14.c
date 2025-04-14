//Sum of even numbers between 1-n (inclusive)

#include <stdio.h>

int main()
{
    int counter,n,count=0;

    printf("Enter n: ");
    scanf("%d",&n);

    for(counter=1; counter<=n; counter++)
    {
        if(counter%2==0)
        {
            count++;
        }
    }

    printf("Available even numbers in between 1-%d is %d",n, count);

    return 0;
}



