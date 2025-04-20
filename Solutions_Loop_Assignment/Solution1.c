


#include <stdio.h>
int main()
{
    int counter,x,y, sum=0;
    printf("Enter x and y: ");
    scanf("%d %d",&x,&y);

    for(counter=x; counter<=y; counter++)
    {
        printf("%d ",counter);
        sum=sum+counter;
    }
    printf("\nThe sum is %d",sum);


}

