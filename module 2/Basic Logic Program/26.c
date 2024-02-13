#include<stdio.h>
#include<conio.h>
main()
{
      float fahrenheit;
      float celsius;
      printf("Enter Fahrenheit:");
      scanf("%f",&fahrenheit);
      celsius = (fahrenheit-32)*5/9;
      printf("celsius value is %.2f",celsius);
      getch();
      }
