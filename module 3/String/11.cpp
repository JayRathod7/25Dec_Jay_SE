#include<stdio.h>
#include<string.h>
#include <ctype.h>



main(){	
		char str[100];
		char str1;
		int i;
		
		printf("uper case and lowercase string:");
		gets(str);
		
		
		for(i =0; str[i]!='\0';i++)	{
			 str1 = islower(str[i])? toupper(str[i]):tolower(str[i]); 
	 		 printf("%c",str1);
		}
		
}
