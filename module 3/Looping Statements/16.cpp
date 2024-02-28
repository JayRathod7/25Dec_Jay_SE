//1 2 3 4 5 6 7 8 9 10 = 55

#include<stdio.h>
main(){
	int number;
	int sum =0;
	int i;
	
	printf("Enter Number & get of Natural Number sum:");
	scanf("%d",&number);
	while(i<=number){
		printf("%d ",i);
		sum = sum+i;
		i++;
	}
	printf("= %d",sum);
	
	
}
