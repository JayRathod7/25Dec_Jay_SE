#include<stdio.h>
#include<conio.h>
main()
{
      long int students;
      long int  apple = 5;
      long int final;
      
      printf("Enter Number Of Students:");
      scanf("%ld",&students);
      
      final = apple*students;
      printf("Required apples are:%ld", final);
      getch();
      }
