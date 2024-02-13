#include<stdio.h>
main(){
	int a;
	int b;
	int c;
	
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	c = a+b;
	printf("Total is :%d\nvaraible size is:%d",c,sizeof(c));
}
