#include<stdio.h>
#include<conio.h>
main()
{
      long int salary;
      long int insurance;
      long int loan;
      
      
      printf("Enter Your salary:");
      scanf("%ld",&salary);
      
      insurance = salary*10/100;
      
      printf("insurance premium 10%% :%ld",insurance);
      printf("\nyour salary after deduct premium:%ld",salary-insurance);
      
      
      loan = salary*10/100;
      printf("\nloan installment 10%% :%ld",loan);
      
      printf("\nyour salary after deduct premium:%ld",salary-loan);
      
      printf("\n Salry is after deduct loan and insurance is:%ld",salary-loan-insurance);
      getch();
      }
