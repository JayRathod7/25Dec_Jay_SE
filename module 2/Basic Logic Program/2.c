#include<stdio.h>
#include<conio.h>
main()
{
      float a;
      float b;
      float ans;
      //float module;
      printf("Enter Value a:");
      scanf("%f",&a);
      printf("Enter Value b:");
      scanf("%f",&b);
      ans =a+b;
      printf("\nYour additional value is:%.2f",ans);
      ans =a-b;
      printf("\nYour subtraction value is:%.2f",ans);
      ans = a*b;
      printf("\nYour multiplication value is:%.2f",ans);
      ans = a/b;
      printf("\nYour division value is:%.2f",ans);
      //module = a%b;
      //printf("\nYour module value is:%.2f",module);
      getch();
      
     }  
