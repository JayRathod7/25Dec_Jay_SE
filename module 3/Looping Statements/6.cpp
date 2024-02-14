#include<stdio.h>
main(){
	int i =0;
	int n = 0;
	int n1=0;
	int n2=1;
	int final;
	
	printf("ENter Number and get Fibonacci Series:");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++){
		printf("%d,",final);

		n1 = n2;
		n2 = final;
		final = n1+n2;
		
	}
	
}
