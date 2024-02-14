#include<stdio.h>
main(){
	
int i =1;
int j =1;

for(i = 1; i<=10;i++){
	for(j = 1; j<=i;j++){
		printf("* ");
	}
	if(i>=5){
		j--;
	}
	printf("\n");
}
}
