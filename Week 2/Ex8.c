#include <stdio.h>

int main(void){

	int start, end, i; // Decleration of variables

	printf("Please enter the START point of the conversion table: \n"); 
	scanf("%d", &start);

	printf("Please enter the END point \n"); 
	scanf("%d", &end);
	
	if (start > end){
		printf("Error: Start point entered is larger than end point!\n");
	}
	else{
		printf("Decimal  Hexadecimal\n");
		
		for(i = start; i <= end; i++)
			printf("   %d         %x\n", i, i);
	}		

	return(0);
}
