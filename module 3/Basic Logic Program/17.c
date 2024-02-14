#include<stdio.h>
#include<conio.h>
main()
{
      long int salary;
      long int inspre= 10;
      long int final;
      printf("Enter Your Salary:");
      scanf("%ld",&salary);
      final = salary *10/100;
      printf("your insurance premium based on salary is:%ld",final);
      getch();
      
           
}
