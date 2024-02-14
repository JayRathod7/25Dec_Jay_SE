#include<stdio.h>
#include<conio.h>
 main()
{
     float pi =3.14;
     float radius;
     float area;
     float circumference;
     printf("Enter the radius of circle:");
     scanf("%f",&radius);
     area = pi*radius*radius;
     circumference = 2*pi*radius;
     printf("Area of circle is: %.2f",area);
     printf("\nCircumference of circle is: %.2f",circumference);
     getch();
     }
