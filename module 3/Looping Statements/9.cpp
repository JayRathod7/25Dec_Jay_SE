#include<stdio.h>
main()
{
	int i;
	int values[4];
	int j=0;
	
	printf("Enter Any Number= ");
	
	for(i=1; i<=4; i++)
	{
		scanf("%d", &values[i]);
	}
	
	for(i=1; i<=4; i++)
	{
		j=j+values[i];
	}
	printf("%d", j);
}

