#include <stdio.h>

int main()
{
       int age, marks;
       printf("Enter your age\n");
       scanf("%d", & age);
 printf("Enter your marks\n");
       scanf("%d", &marks);
       switch (age)
       {
       case 3:
              printf("The age is 3\n");
              switch (marks)
              {
              case 34:
                    printf("Your marks  is 34");
                     break;
              
              default:
              printf("Your marks  is not 34");
                    
              }
               break;

             
       case 13:
              printf("The age is 13\n");
              break;
       case 15:
              printf("The age is 15\n");
              break;

       default:
              printf("The age is not above mentioned\n");
              break;
              
       }
       return 0;
}
