#include<stdio.h>

int main(void){

	char letter, toggle;

	printf("Please enter a character: \n");
	scanf(" %c", &letter);

	toggle = letter ^ 32;

	printf("%c \n", toggle);

	return(0);
}
