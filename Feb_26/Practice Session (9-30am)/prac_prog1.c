/*Write a C Program to read three decimal number: x, y, and z from user and evaluate the following mathematical function:
𝑥𝑦+𝑦𝑧+𝑧𝑥*/

#include <stdio.h>

int main()
{
    int x, y, z, result;

    printf("Enter x, y, z separated by space: ");
    scanf("%d %d %d",&x,&y,&z);

    result = (x*y+y*z+z*x);

    printf("The result is: %d",result);


}
