#include<stdio.h>

int main(void){
	
	char letter; 

	printf("Enter characters to have them echoed back \nThen press full-stop to end\n");
		
	while (letter != 46){
		letter = getchar();
		putchar(letter);
	}
	
	return(0);
}
