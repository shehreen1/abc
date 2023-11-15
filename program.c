#include <stdio.h>

int main()
{
       int number ;
       printf("Enter your father's phone number\n");
        scanf("%d", &number);
       switch (number)
       {
       case 8923263942:
                 printf(" your number is correct\n");
              break;
       
       default:
       printf("This is not your father's number \n");
 
            
      }
        
       return 0;
}