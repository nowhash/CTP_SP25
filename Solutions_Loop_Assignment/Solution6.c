


#include <stdio.h>
int main()
{
    int counter,n;
    printf("Enter n: ");
    scanf("%d",&n);

    for(counter=1; counter<=n; counter++)
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
}
