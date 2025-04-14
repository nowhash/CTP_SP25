//Sum of 1-n

#include <stdio.h>

int main()
{
    int counter,n,sum=0;

    printf("Enter n: ");
    scanf("%d",&n);

    for(counter=1; counter<=n; counter++)
    {
        sum=sum+counter;
    }

    printf("The sum is %d",sum);

    return 0;
}
