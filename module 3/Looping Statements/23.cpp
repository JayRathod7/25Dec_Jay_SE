#include<stdio.h>
main()
{
	int i;
	int j=0; 
	int k;
	
	printf("Enter Number= ");
	scanf("%d", &i);
	
	for(;i!=0; i/=10)
	{
		
		k=i%10;
		j=j*10+k;	
	}
	printf("%d", j);
}
