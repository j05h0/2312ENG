#include<stdio.h>

int main(void){

	int i;
	i = 10;

	printf("This first set is generated using a 'While Loop' \n");
	while(i > 0){
		printf("%d \n", i);
		i = i - 1;
	}

	printf("------ \nThe second set is generated using a 'For Loop' \n");

	for(i=10; i>0; i--)
		printf("%d \n", i);
	
	return(0);
}
