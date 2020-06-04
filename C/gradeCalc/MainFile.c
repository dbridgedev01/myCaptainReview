#include <stdio.h>

int main()
{
    float marks = 0;

    printf("Enter The Total Marks For Grade Calculation : ");
    scanf("%f", &marks);
    
    // The if else ladder for printing GRADE
    if(marks > 100)
        printf("PLEASE ENTER VALID MARKS!");
    else if(marks > 84)
        printf("GRADE A ");
    else if(marks > 69)
        printf("GRADE B ");
    else if(marks > 54)
        printf("GRADE C ");
    else if(marks > 39)
        printf("GRADE D ");
    else
        printf("GRADE F ");

    return 0;

}