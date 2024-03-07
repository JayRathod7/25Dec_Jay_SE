#include<stdio.h>

main()
{
	int matrix1[2][2];
	int matrix2[2][2];
	int i,j,sum1=0,sum2=0,sum3=0,sum4=0;
	
	printf("Enter Any 4 Number= ");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d", &matrix1[i][j]);
		}
	}
	
	printf("\n=====================================\n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d\t",matrix1[i][j]);
			
		}
		printf("\n");
		
	}
	
	printf("=====================================\n");
	
	printf("Enter Any 4 Number= ");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d", &matrix2[i][j]);
		}
	}
	
	printf("=====================================\n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d\t",matrix2[i][j]);
			
		}
		printf("\n");	
	}
	
	printf("\n==============Addition Of Matrix=======================\n");
	
	sum1=(matrix1[0][0]+matrix2[0][0])+(matrix1[0][1]+matrix2[1][0]);
	sum2=(matrix1[0][0]+matrix2[0][1])+(matrix1[0][1]+matrix2[1][1]);
	sum3=(matrix1[1][0]+matrix2[0][0])+(matrix1[1][1]+matrix2[1][0]);
	sum4=(matrix1[1][0]+matrix2[0][1])+(matrix1[1][1]+matrix2[1][1]);
	
	printf("%d\t", sum1);
	printf("%d\n", sum2);
	printf("%d\t", sum3);
	printf("%d", sum4);
	
	printf("\n==============Substraction Of Matrix=======================\n");
	
	sum1=(matrix1[0][0]-matrix2[0][0])+(matrix1[0][1]-matrix2[1][0]);
	sum2=(matrix1[0][0]-matrix2[0][1])+(matrix1[0][1]-matrix2[1][1]);
	sum3=(matrix1[1][0]-matrix2[0][0])+(matrix1[1][1]-matrix2[1][0]);
	sum4=(matrix1[1][0]-matrix2[0][1])+(matrix1[1][1]-matrix2[1][1]);
	
	printf("%d\t", sum1);
	printf("%d\n", sum2);
	printf("%d\t", sum3);
	printf("%d", sum4);
	
	printf("\n==============Multiplication Of Matrix=======================\n");
	
	sum1=(matrix1[0][0]*matrix2[0][0])+(matrix1[0][1]*matrix2[1][0]);
	sum2=(matrix1[0][0]*matrix2[0][1])+(matrix1[0][1]*matrix2[1][1]);
	sum3=(matrix1[1][0]*matrix2[0][0])+(matrix1[1][1]*matrix2[1][0]);
	sum4=(matrix1[1][0]*matrix2[0][1])+(matrix1[1][1]*matrix2[1][1]);
	
	printf("%d\t", sum1);
	printf("%d\n", sum2);
	printf("%d\t", sum3);
	printf("%d", sum4);
}
