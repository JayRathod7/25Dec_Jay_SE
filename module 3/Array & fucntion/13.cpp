#include<stdio.h>

main()
{
	int i;
	int num[5];
	
	for(i=1; i<=5; i++)
	{
		printf("Enter Number:");
		scanf("%d", &num[i]);
	}
	
	printf("\nThis Is Even Number\n");
	for(i=1; i<=5; i++)
	{
		if(num[i]%2==0)
		{
			printf("%d,", num[i]);
		}
	}
	
	printf("\nThis Is Odd Number\n");
	for(i=1; i<=5; i++)
	{
		if(num[i]%2!=0)
		{
			printf("%d,", num[i]);
		}
	}
}
