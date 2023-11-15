#include <stdio.h>

// int factorial(int number)
// {
//        if (number==1|| number==0)
//        {
//        return 1;
//        }
//        else{
//               return(number *factorial(number-1));
//        }
// }
int main()
{
     int a=24;
     int b=34;
     int ptr2=NULL;
     int *ptra=&a;
     printf("The address of a  is %p\n",&a);
     printf("The value of b is %d\n",b);
     printf("The vaue of garbage is %p\n",ptr2);
}
// {
//       char input;
//       float kmTomiles = 0.621371;
//       float inchesToFoot = 0.0833333;
//       float cmsToInches = 0.393701;
//       float poundTokgs = 0.453592;
//       float inchesTometers = 0.0254;
//       float first, second;

//       while (1)
//       {
//             printf("Enter the value from q to quit\n      1. kms To miles\n    2. inches to foot\n       3. cms To inches\n           4. pound To kgs\n             5. inches To meters\n");

//             scanf("%c", &input);

//             switch (input)
//             {
//             case 'q':
//                   printf("Quitting the program...");
//                   goto end;
//                   break;

//             case '1':
//                   printf("Enter quantity in terms of first unit\n");
//                   scanf("%f", &first);
//                   second = first * kmTomiles;
//                   printf("%f km is equal to %f Miles \n", first, second);
//                   break;
//             case '2':
//                   printf("Enter quantity in terms of first unit\n");
//                   scanf("%f", &first);
//                   second = first * inchesToFoot;
//                   printf("%f Inches  is equal to %f Foot \n", first, second);
//                   break;
//             case '3':
//                   printf("Enter quantity in terms of first unit\n");
//                   scanf("%f", &first);
//                   second = first * cmsToInches;
//                   printf("%f Cms  is equal to %f  Inches\n", first, second);
//                   break;
//             case '4':
//                   printf("Enter quantity in terms of first unit\n");
//                   scanf("%f", &first);
//                   second = first * poundTokgs;
//                   printf("%f Pounds is equal to  %f kgs\n", first, second);
//                   break;
//             case '5':
//                   printf("Enter quantity in terms of first unit\n");
//                   scanf("%f", &first);
//                   second = first * inchesTometers;
//                   printf("%f Inches   is equal to %f meters \n", first, second);
//                   break;

                  //      case '1';
                  //       printf("Enter quantity in terms of first unit");
                  //       printf("Enter quantitiy in terms of second unit");
                  //       printf("%f is equal to %f \n", first, second);
                  //       break;

//             default:

//                   break;
//             }
//       end:
//             return 0;
//       }
// }

//  int marks[2][4] = {{5,5,7},
//                     {3,2,3,3}};

// for (int i = 0; i < 6; i++)
// {
//        printf("Enter the value of %d element of the array\n",i);
//        scanf("%d", &marks[i]);
// }

//  for (int i = 0; i < 3; i++)
//  {
//       for (int j = 0; j < 4; j++)
//       {
//             /* code */

//       printf(" the value of %d, %d element of the array is %d\n", i, j, marks[i][j]);
// }
//   scanf("%d", &marks[i]);
/* code */

// int marks[4];
// marks[0] = 34;
// printf("Marks of student 1 is %d\n", marks[0]);
// marks[0]=4;
//  marks[1]=78;
//   marks[2]=43;
//    marks[3]=90;
//    printf("Marks of student 1 is %d\n", marks[4]);

// int num;
// printf("Enter the number you want factorial of\n");
//  scanf("%d" , &num);
// printf("the factorial of %d is %d", num, factorial(num));

//  printf("%d X 2 = %d\n", num , num*2);
//   printf("%d X 3 = %d\n", num , num*3);
//    printf("%d X 4 = %d\n", num , num*4);
//     printf("%d X 5= %d\n", num , num*5);
//      printf("%d X  6= %d\n", num , num*6);
//       printf("%d X 7 = %d\n", num , num*7);

// void printstar(int n)
// {
//        for (int i = 0; i < n; i++)
//        {
//               printf("%c", '*');
//        }
// }
// int takenumber()
// {
//        int i;
//        printf("Enter a number");
//        scanf("%d",&i);
//        return i;
// }

// int main()
// {
//        int a, b, c;
//        a = 1;
//        b = 2;
//        // c = sum(a, b);
//        // printstar(10);
//        // printf("The sum is %d\n",c);
//          c= takenumber();
//          printf("the number entered is %d\n",c);
//        return 0;
// }
// short  a=13; //initializing variable of short data type
// int b; //declaring int variable 'b'.
// b=a; //Implicit type casting
// // printf("%d\n",a);
// printf("%d\n",b);
// int sum(int a, int b);
// {
//        return (a + b);
// }

// int a=3;
// float b= (float) 54/5;
// printf("The value of b is %f\n", b);

// label:
// printf("This is label");

// goto end;

// printf("Hello World\n");

// goto label;

// int i, num;
// for(i = 0;   i < 5; i++)
// {
//        printf("%d\n Enter your goal no.\n",i);
//        scanf("%d", &num);

// {
//        continue;
// }
// printf("you are faboulous");
// printf("Are you doing any affirmation practice");
// printf("Shehreen is a good girl");
//               break;
//        }

// int i=0;
// while(i<54)
// {
// printf("%d\n",i);
// i= i+1;
// }
// int num ,index=0;
// printf("Enter a number\n");
// scanf("%d", &num);
// do{
// printf("%d\n", index+1);
//     index = index + 1;
// }while(index<num);
// end:
