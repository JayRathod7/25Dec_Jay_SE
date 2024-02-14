#include<stdio.h>
#include<conio.h>
main()
{
      long int salary;
      long int annualSal;
      printf("Enter Your Monthly salary:");
      scanf("%ld",&salary);
      annualSal = salary*12;
      printf("Your Annual salary is :%ld",annualSal);
      getch();

      }
