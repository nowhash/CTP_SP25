//Multiplication Table

#include <stdio.h>

int main()
{
    int counter,x,y,sum=0;

    printf("Enter x & y: ");
    scanf("%d %d",&x,&y);

    for(counter=x; counter<=y; counter++)
    {
        if(counter%2==0)
        {
            sum=sum+counter;
        }
    }

    printf("The sum is %d",sum);

    return 0;
}


