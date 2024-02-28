
#include <stdio.h>

int main() {
	
  int i;
  int j;
  int values[5];
  int max=0;
  int min=0;

  	printf("Enter 5 integers: ");
  	
  	for(i=1; i<=5; i++)
  	{
  		scanf("%d", &values[i]);
	}
	
	for(i=1; i<=5; i++)
	{
		if(values[i]>max)
		{
			max=values[i];
		}	
	}
	printf("Max Number is= %d\n", max);

}
