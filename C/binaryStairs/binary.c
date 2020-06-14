#include <stdio.h>

int main()
{
    int step=0;
    printf("Enter The Number Of Stairs : ");
    scanf("%d",&step);

    // Nested Loop For Printing The Pattern
    for(int i=0; i<step; ++i)
    {
      for(int j=0; j<=i; ++j)
      {
          printf("01");
      }
      printf("\n");  
    }

}