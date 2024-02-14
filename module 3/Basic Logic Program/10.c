#include<stdio.h>
#include<conio.h>
main()
{
      float length;
      float width;
      float height;
      float area;
      
     printf("Enter rectangle lenght:");
     scanf("%f",&length);
     
     printf("Enter rectangle width:");
     scanf("%f",&width);
     
     printf("Enter rectangle height:");
     scanf("%f",&height);
     
    
     area = (width*length + height*length + width*height)*2;
     printf("Area of rectangle prism is:%.2f", area);
     getch();
      }
