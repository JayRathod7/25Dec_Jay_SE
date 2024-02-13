#include<stdio.h>
#include<conio.h>
main()
{
      long int length;
      long int widhth;
      long int c;
      printf("Enter length:");
      scanf("%ld",&length);
      printf("Enter widhth:");
      scanf("%ld",&widhth);
      c = 2*length + 2*widhth;
      printf("rectangle circumference is:%ld",c);
      getch();
      }
