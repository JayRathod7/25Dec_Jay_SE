#include <stdio.h>  
#include <string.h>  
main()  
{  
    char str[40]="";
    char str1[40] ="";
    int i = 0;

    printf (" \nEnter a string to be reversed: ");  
    scanf ("%s" , str);  
    
    printf (" \n After the reverse of a string: %s ", strrev(str));  
    while (strrev(str)!='\0'){
        printf("%c",str[i]);
        i++;
    }
}  





//#include <stdio.h>
//
//main() {
//   char str[90]="";
//    int number=0;
//    
//    printf("Enter Your Name:");
//    scanf("%s",str);
//    while (str[number]!='\0'){
//        printf("%c ",str[number]);
//        number++;
//    }
//}
//
//


