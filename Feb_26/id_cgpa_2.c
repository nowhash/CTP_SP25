//C Program to display the id and cgpa of a student

#include <stdio.h>

int main()
{
    int id;
    float cgpa;

    printf("Enter ID: ");
    scanf("%d",&id);

    printf("Enter CGPA: ");
    scanf("%f",&cgpa);

    printf("The id is %d and cgpa is %f",id,cgpa);
    return 0;
}

