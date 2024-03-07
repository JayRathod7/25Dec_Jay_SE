#include<stdio.h>
#include<string.h>


main(){
	char str[100];
	int icount;
	int scount;
	int space;
	int len=0;
	int i;
	int count=0;
	printf("Enter Your String:");
	gets(str);
	
	len = strlen(str);
	for(i=0;i<=len;i++){
		icount = (str[i]== 'i' || str[i]=='I');
		scount = (str[i+1]== 's' ||str[i+1]=='S');
		space =( str[i+2] == ' ' || str[i+2]== '\0' );
		
		if((icount && scount && space)== 1 ){
			count++;
		}
	}

	printf("Numer of is:%d",count);
}
