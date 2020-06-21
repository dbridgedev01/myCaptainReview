#include <stdio.h>

int main()
{   
    int number = 0;
    int sumDigits(int); // Function To Find The Sum
    
    printf("Enter The Number: ");
    scanf("%d",&number);
    
    printf("%d",sumDigits(number));
    
    return 0;

}

int sumDigits(int num)
{
    if(num==0)
        return 0;
    else 
        return (num%10 + sumDigits(num/10));

    /*
    num = 23
    return -> 3 + 2 + 0 = 9 [From The Stack]
    */
}
