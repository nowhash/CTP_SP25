

#include <stdio.h>
int main()
{
    int counter,n;
    printf("Enter n: ");
    scanf("%d",&n);

    for(counter=1; counter<=n; counter=counter*3)
    {
        printf("%d ",counter);
    }
}
