#include <stdio.h>

main() {
   char str[90]="";
    int number=0;
    
    printf("Enter Your Name:");
    scanf("%s",str);
    while (str[number]!='\0'){
        printf("%c ",str[number]);
        number++;
    }
}



