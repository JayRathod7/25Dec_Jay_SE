//A
//A B
//A B C
//A B C D
//A B C D E


#include<stdio.h>
main(){
	char ch ='A';
	
	for(int i=0;i<5;i++){
			for(int j=0;j<=i;j++){
				printf("%c ",ch+j);
			}	
			
			printf("\n");
	}
}
