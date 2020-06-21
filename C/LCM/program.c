#include <stdio.h>

int main()
{   
    int lcm(int, int, int);
    int num1 = 0, num2 = 0, min=0;
    
    printf("Enter Two Numbers: ");
    scanf("%d %d", &num1, &num2);
    
    min = num1>num2?num2:num1;
    
    printf("LCM OF %d AND %d IS: %d", num2, num2, lcm(num1,num2,min));
}


int lcm(int num1, int num2, int min)
{
    if(min%num1 == 0 && min%num2==0)
        return min;
    
    // Recursion
    else 
    {
        ++min;
        lcm(num1, num2, min);
    }
}    
