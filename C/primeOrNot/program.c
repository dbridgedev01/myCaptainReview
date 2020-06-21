#include <stdio.h>

int main()
{   int temp=0;
    int number=0;
    int isPrime(int, int); // Function To Check For Prime Or Not
    
    printf("Enter The Number: ");
    scanf("%d", &number);

    if(number<=1) // 1, 0 & -n Check
    {
        printf("%d IS NOT A PRIME NUMBER!", number);
        return 0;
    }
    
    temp = number-1; // n-1
    
    if(isPrime(number, temp)) 
        printf("%d IS A PRIME NUMBER!", number);
    
    else
        printf("%d IS NOT A PRIME NUMBER!", number);
        
        
    return 0;

}

int isPrime(int num, int i)
{
     // Division Begins From (n-1)
    
    if (i==1) // If It Doesn't Encounter A return Statement Before n=1
        return 1;
    
    else if(num%i == 0) // Immediately returns 0 If Division Is Possible 
        return 0;
    
    else // Recursion
    {
        --i;
        isPrime(num, i);
    }

}