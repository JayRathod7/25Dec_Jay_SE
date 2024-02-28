#include <stdio.h>
#include <string.h>

main() 
{  
     char str[100];
	 printf("Enter Your Word Without Space:");
	 scanf("%s",str);
	 int length = strlen(str);

     printf("total number of words in a string is: %d\n", length);

}
