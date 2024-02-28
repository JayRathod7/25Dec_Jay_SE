#include<stdio.h>

main(){
	
	char str[100];
	int number=0;
	
	printf("Enter a string: \n");
    scanf("%s",str);
	for(int i=0;str[i]!='\0';i++){
		number++;
	}
		printf("%d",number++);
}
