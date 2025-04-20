


#include <stdio.h>
int main()
{
    int counter,n, c=0;

    for(counter=1; counter<=100; counter++)
    {
        if(counter%2==0 || counter%3==0)
        {
            c=c+1; //even++;
        }
    }
                printf("Even numbers: %d\n",c);

}

