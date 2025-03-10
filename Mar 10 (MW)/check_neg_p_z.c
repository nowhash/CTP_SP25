//Write a c program to check if a number is positive, negative, or zero.


#include <stdio.h>

int main()
{
  int n;

  scanf("%d",&n);

  if(n>0)
  {
    printf("P");
  }
  else if (n<0)
  {
      printf("N");
  }

  else
  {
      printf("Z");
  }
}
