//Relational Operator and Logical Operator

#include <stdio.h>

int main()
{
    int n1=10, n2=10;

    //Relational Operator
    printf("The result of %d>%d is %d",n1,n2,n1>n2);
        printf("\nThe result of %d>=%d is %d",n1,n2,n1>=n2);

        //Logical Operator
        printf("\nAND = %d",n1>n2 && n1==n2);

        printf("\nOR = %d",n1>n2 || n1==n2);




    return 0;
}
