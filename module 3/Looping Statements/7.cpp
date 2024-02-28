#include<stdio.h>
main()
{
	int i;
	int values[5];
	
	printf("Enter Any Number : \n");
	for(i=1; i<=3; i++)
	{
		scanf("%d", &values[i]);
	}
	
	for (i=5; i>=1; i--)
	{
		printf("%d", values[i]);
	}
}
