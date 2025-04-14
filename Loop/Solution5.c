//Generate the following series: 1 5 9 13 17...

#include <stdio.h>

int main()
{
    int counter;

    for(counter=1; counter<=20; counter=counter+4)
    {
        printf("%d ",counter);
    }

    return 0;
}



