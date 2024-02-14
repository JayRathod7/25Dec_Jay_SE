#include<stdio.h>
main(){
	char c;
	printf("Enter Alphabet and check vowel or Consonant:");
	scanf("%c",&c);
	
	switch(c){
		case 'a':
		printf("%c This Alphabet is vowel",c); 
		break;
		case 'A':
		printf("%c This Alphabet is vowel",c); 
		break;
		case 'e':
		printf("%c This Alphabet is vowel",c); 
		break;
		case 'E':
		printf("%c This Alphabet is vowel",c); 
		break;
		case 'i':
		printf("%c This Alphabet is vowel",c); 
		break;
		case 'I':
		printf("%c This Alphabet is vowel",c); 
		break;
		case 'o':
		printf("%c This Alphabet is vowel",c); 
		break;
		case 'O':
		printf("%c This Alphabet is vowel",c); 
		break;
		case 'u':
		printf("%c This Alphabet is vowel",c); 
		break;
		case 'U':
		printf("%c This Alphabet is vowel",c); 
		break;
		default:printf("%c is Consonant",c);
	}
}
