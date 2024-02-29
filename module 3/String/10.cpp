#include<stdio.h>
#include<string.h>


main(){
	char ch[100];
	int lenth = 0;
	int i=0;
	
	
	
	printf("Enter Your Name:");
	gets( ch);
	
	lenth = strlen(ch);
	for(i;i<lenth;i++){
		if(ch[i]==' '){
			ch[i]= 0;
			printf("\n");
		}
		printf("%c",ch[i]);
	}
}



