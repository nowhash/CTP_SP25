//Print all the numbers in between 1 - 100 (inlcusive) that are divisible by 5

#include <stdio.h>

int main()
{
    int counter;

    for(counter=1; counter<=100; counter++)
    {
        if(counter%5==0)
        {
            printf("%d ",counter);
        }
    }

    return 0;
}





