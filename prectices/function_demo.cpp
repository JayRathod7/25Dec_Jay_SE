#include<stdio.h>

getId(){
	int id;
	char name[30];
	char city[30];
	printf("Enter Your Id:");
	scanf("%d",&id);
	printf("Enter Your name:");
	scanf("%s",&name);
	printf("Enter Your city:");
	scanf("%s",&city);
	printf("id is :%d\n",id);
	printf("name is :%s\n",name);
	printf("city :%s\n",city);
}

main(){
	getId();
}



