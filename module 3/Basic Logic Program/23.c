#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	int b;
	
	printf("Enter A value:");
	scanf("%d",&a);
	printf("Enter B value:");
	scanf("%d",&b);
	
	a = a*b;
	b = a/b;
	a = a/b;
	printf("value a is:%d\nvalue b is:%d",a,b);
	
}

