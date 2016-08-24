#include<stdio.h>

int main(void){

	int number, new; 
	number = 0xFF;

	new = number & 0xA4;
	
	printf("%X \n", new);

	return(0);
}
