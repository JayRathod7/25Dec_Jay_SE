#include<stdio.h>

main()
{
	int i;
	int ch;
	int j;
	int k;
	int input1[20];
	int input2[5];
	
	printf("Enter How Many Number Do You Want To Enter= ");
	scanf("%d", &ch);
	
	printf("Enter Any %d Number= ", ch);
	for(i=0; i<ch; i++)
	{
		scanf("%d", &input1[i]);
	}
	
	printf("\n===================================\n");
	
	printf("Enter Any %d Number= ", ch);
	for(i=0; i<ch; i++)
	{
		scanf("%d", &input2[i]);
	}

	printf("\n===================================\n");
	printf("\nNumber In Ascending Order\n");
	
	for(i=0; i<ch; i++)
	{
		for(j=i+1;j<ch;j++)
		{
			if(input1[i]>input1[j])
			{
				k=input1[i];
				input1[i]=input1[j];
				input1[j]=k;
			}
		}
		
	}
	
	for(i=0; i<ch; i++)
	{
		printf("%d, \t", input1[i]);
	}
	
	
	printf("\n===================================\n");
	printf("\nNumber In Descending Order\n");
	
	for(i=0; i<ch; i++)
	{
		for(j=i+1; j<ch; j++)
		{
			if(input2[i]<input2[j])
			{
				k=input2[i];
				input2[i]=input2[j];
				input2[j]=k;
			}
		}
	}
	
	for(i=0; i<ch; i++)
	{
		printf("%d, \t", input2[i]);
	}
}
