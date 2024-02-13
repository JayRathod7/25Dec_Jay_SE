#include<stdio.h>

main(){
char n1[20],n2[20],n3[20],n4[20];
int s1,s2,s3,s4,total;
float avg;

printf("Enter Your Name:");
scanf("%s,",&n1);
printf("Enter Your Salary:");
scanf("%d",&s1);
printf("Enter Your Name:");
scanf("%s,",&n2);
printf("Enter Your Salary:");
scanf("%d",&s2);
printf("Enter Your Name:");
scanf("%s,",&n3);
printf("Enter Your Salary:");
scanf("%d",&s3);
printf("Enter Your Name:");
scanf("%s,",&n4);
printf("Enter Your Salary:");
scanf("%d",&s4);

total = s1+s2+s3+s4;
avg = total/4;

printf("Total Salary is:%d",total);
printf("\nAverage Salary is:%.2f",avg);

}


