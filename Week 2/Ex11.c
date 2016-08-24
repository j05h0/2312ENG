#include<stdio.h>

int main(void){

	int hex1, hex2, a, b;

	printf("Please enter the first hexadecimal number for the operation: \n");
	scanf("%X", &hex1);

	printf("Please enter the second hexadecimal number: \n");
	scanf("%X", &hex2);

	a = hex1 & hex2;
	b = hex1 | hex2;
	
	printf("The result of AND-ing these numbers is: %X \n", a);
	printf("The result of OR-ing these numbers is %X \n", b);

	return(0);
}
