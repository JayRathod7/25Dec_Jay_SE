#include<stdio.h>
#include<conio.h>
main()
{      
      char fname[30],sname[30],lname[30];
      printf("Enter your school name:");
      scanf("%s %s %s",&fname,sname,lname);
      printf("short form is %c. %c. %s",fname[0],sname[0],lname);
      getch();
      }
