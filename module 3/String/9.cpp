#include <stdio.h>
#include <string.h>
 
main() {
    char str[100];
    int number = 0;

    printf("Enter a string: ");
    gets(str);

    int length = strlen(str);
    
    printf("Max Numbers of Charaters is:%d",length);
}

