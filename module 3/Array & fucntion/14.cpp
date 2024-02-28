//2 d array
#include<stdio.h>
main(){
	int a[3][2];
	int i = 0;
	int j =0;
	
	printf("Enter Number:");
	for(i =0;i<3;i++){
		for( j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(int j=0;j<2;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
