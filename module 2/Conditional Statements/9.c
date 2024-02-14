#include<stdio.h>
#include<ctype.h> 
main(){
	char ch;
	printf("Enter one Alphabet,symbol,digit:");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z'){
		printf("%c is Lowercase alphabet",ch);
	}else if(ch>='A'&& ch<='Z'){
		printf("%c is a Uppercase alphabet",ch);
	}else if(isdigit(ch)){
		printf("%c is a Digit",ch);
	}else{
		printf("%c is a Symbol",ch);
	}
}
