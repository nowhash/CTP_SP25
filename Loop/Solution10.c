//Sum of 1-10

#include <stdio.h>

int main()
{
    int counter,sum=0;

    for(counter=1; counter<=10; counter++)
    {
        sum=sum+counter;
    }

    printf("The sum is %d",sum);

    return 0;
}
