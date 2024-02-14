#include<stdio.h>


int demoFu(int a); 
main(){
	printf("Your Ans is:%d",demoFu(25));
	return 0;
}

int demoFu(int a){
if(a==1){
	return 1;
}
  int i = demoFu(a-1);
 
  return i;
}


