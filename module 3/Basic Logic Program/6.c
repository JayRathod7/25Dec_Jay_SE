#include<stdio.h>
#include<conio.h>
main()
{
      long int base;
      long int height;
      long int area;
      printf("Enter base of triangle:");
      scanf("%ld",&base);
      printf("Enter height of triangle:");
      scanf("%ld",&height);
      area = (base*height)/2;
      printf("Area of triangle is:%ld",area);
      getch();
      }
