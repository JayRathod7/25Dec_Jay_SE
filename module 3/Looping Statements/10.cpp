#include<stdio.h>
main()
{
	int i;
	int number;
	int val[5];
	
	printf("Enter Any Number= ");
	
	for(i=1; i<=4; i++)
	{
		scanf("%d", &val[i]);
	}

	for(i=1; i<=4; i++)
	{
		number = val[1]+val[4];
	}
	printf("%d", number);

}
