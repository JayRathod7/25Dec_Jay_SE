#include<stdio.h>

int input_digit(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return (n*input_digit(n-1));
	}
	
	
}

main()
{
	int n;
	printf("Enter Factorial number:");
	scanf("%d", &n);
	printf("%d", input_digit(n));
}
