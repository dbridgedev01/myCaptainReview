#include <stdio.h>

int main()
{
    // This one's for Byte!

    int choice = 0;
    printf("Hey Byte! Time To Eat, Your Food Is Cooking!\n");
    printf("Enter A Number Of Your Choice (1-5) : ");
    scanf("%d", &choice);

    // For Deciding The Food Using switch 

    switch (choice)
    {
        case 1 : printf("Food Item - Burger\nPrice - Rs 129");
            break;
        case 2 : printf("Food Item - Pasta\nPrice - Rs 179");
            break;
        case 3 : printf("Food Item - Pizza\nPrice - Rs 239");
            break;
        case 4 : printf("Food Item - Sandwich\nPrice - Rs 149");
            break;
        case 5 : printf("Food Item - French Fries\nPrice - Rs 99");
            break;
        default: printf("Hey Byte, You Don't Have That Option.\nEnter A Number From 1-5");
    }
    
    return 0;
}