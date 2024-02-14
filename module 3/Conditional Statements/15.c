#include<stdio.h>
main(){
	int maths;
	int physics;
	int chemistry;
	int total_2;
	int total_3;
	
	printf("Enter Maths Marks:");
	scanf("%d",&maths);
	printf("Enter Physics Marks:");
	scanf("%d",&physics);
	printf("Enter Chemistry Marks:");
	scanf("%d",&chemistry);
	
	total_3 = maths+physics+chemistry;
	printf("\nThree Subject Total is:%d",total_3);
	total_2 = maths+physics;
	printf("\nTwo Subject Total is:%d",total_2);
	
	if(total_3>=190){
		if(total_2>=140){
			if(maths>=65 && physics>=55 && chemistry>=50){
				printf("\nCongratulation....Eligible for This Course");
			}
		}
	}else{
		printf("\nSorry....Not Eligible for This Course");
	}
}
