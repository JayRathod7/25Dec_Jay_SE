
#include<stdio.h>
main(){
	int n,j,i,tb;
	printf("ENter Number:");
	scanf("%d",&n);
	
	i=1;
	do{
		printf("which table:");
		scanf("%d",&tb);
		j=1;
		do{
			printf("%d*%d=%d\n",tb,j,tb*j);
			j++;
		}while(j<=10);
		i++;
	}while(i<=n);
	
}
