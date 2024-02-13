#include<stdio.h>
#include<conio.h>
main()
{
      int a;
      int b;
      int c;
      printf("Enter value A:");
      scanf("%d",&a);
      printf("Enter value B:");
      scanf("%d",&b);
      printf("current A value is: %d \ncurrent B value is: %d",a,b);
      
      a = a+b;
      b = a-b;
      a = a-b;
      printf("\nA value is: %d \nB value is: %d\n\n",a,b);
      
      printf("Using third variable");
      c=a;
      a=b;
      b=c;
      printf("\nA value is: %d \nB value is: %d",a,b);
      getch();
      }
