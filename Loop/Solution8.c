//Display both even and odd numbers

#include <stdio.h>

int main()
{
    int counter;

    for(counter=1; counter<=10; counter++)
    {
        if(counter%2==0)
        {
            printf("%d is even\n",counter);
        }
        else
        {
            printf("%d is odd\n",counter);
        }
    }

    return 0;
}





