#include<stdio.h>
main(){
int exp1,exp2,exp3,exp4,exp5,total;
float avg;

printf("Enter Your 1st Expense");
scanf("%d",&exp1);
printf("Enter Your 2ed Expense");
scanf("%d",&exp2);
printf("Enter Your 3rd Expense");
scanf("%d",&exp3);
printf("Enter Your 4th Expense");
scanf("%d",&exp4);
printf("Enter Your 5th Expense");
scanf("%d",&exp5);

total = exp1+exp2+exp3+exp4+exp5;
avg = total/5;

printf("Your Total Expense are:%d",total);
printf("Your Total Expense are:%.2f",avg);

}


