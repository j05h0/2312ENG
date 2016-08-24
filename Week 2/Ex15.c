#include<stdio.h>

int main(void){

	int number, new; 
	number = 0x80;

	new = number | 0x52;
	
	printf("%X \n", new);

	return(0);
}
