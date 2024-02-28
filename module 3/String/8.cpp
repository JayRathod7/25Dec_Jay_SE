#include<stdio.h>
main(){
	char str[100];
	int i =0;
	int v =0;
	int c =0;
	
	printf("Enter String:");
	gets(str);
//	scanf("%s",str);
	
	
		for(i;str[i]!='\0';i++){
		if(str[i]== 'a'||str[i]== 'A'||str[i]== 'E'||str[i]== 'e'||str[i]== 'I'||str[i]== 'i'||str[i]== 'o'||str[i]== 'O'||str[i]== 'u'||str[i]== 'U'){
			v++;
		}else{
			c++;
		}
	}   
	printf("Vowels Alphabets number :%d\n",v);
	printf("Consonants Alphabets number :%d",c);

}


