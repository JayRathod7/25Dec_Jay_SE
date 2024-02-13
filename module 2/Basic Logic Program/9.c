#include<stdio.h>
#include<conio.h>
main()
{
      float side_a;
      float side_b;
      float side_c;
      float circumference;
      
      printf("Enter side A of triangle:");
      scanf("%f",&side_a);
      
      printf("Enter side B of triangle:");
      scanf("%f",&side_b);
      
      printf("Enter side C of triangle:");
      scanf("%f",&side_c);
      
      circumference = side_a+side_b+side_c;
      printf("Circumference of triangle is:%.2f", circumference);
      getch();
      }
