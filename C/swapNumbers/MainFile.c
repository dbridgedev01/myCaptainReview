#include <stdio.h>

int main()
{
    int a=0,b=0; // Initialization
    
    printf("Enter Two Numbers : ");  // Asks the user to input to numbers to be swapped
    scanf("%d%d",&a,&b);  // Takes in two numbers 
    
    printf("Numbers Before Swapping : %d,%d",a,b); 
    
    // Swapping without a temp variable
    a = a+b;
    b = a-b;  // (a+b) - b = a
    a = a-b;  // (a+b) - a = b
    
    printf("\nNumbers After Swapping : %d,%d",a,b);

    return 0;

}