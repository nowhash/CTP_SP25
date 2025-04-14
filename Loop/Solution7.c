//Display odd numbers using if else

#include <stdio.h>

int main()
{
    int counter;

    for(counter=1; counter<=10; counter++)
    {
        if(counter%2!=0)
        {
            printf("%d ",counter);
        }
    }

    return 0;
}





