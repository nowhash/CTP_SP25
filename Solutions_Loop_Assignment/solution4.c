


#include <stdio.h>
int main()
{
    int counter,n, even=0;

    printf("Enter N: ");
    scanf("%d",&n);
    for(counter=1; counter<=n; counter++)
    {
        if(counter%2==0)
        {
            even=even+1; //even++;
        }
    }
                printf("Even numbers: %d\n",even);

}

