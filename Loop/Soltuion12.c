//Sum of even numbers between 1-n (inclusive)

#include <stdio.h>

int main()
{
    int counter,n,sum=0;

    printf("Enter n: ");
    scanf("%d",&n);

    for(counter=1; counter<=n; counter++)
    {
        if(counter%2==0)
        {
            sum=sum+counter;
        }
    }

    printf("The sum is %d",sum);

    return 0;
}


