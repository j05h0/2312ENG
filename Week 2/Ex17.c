#include<stdio.h>

int main(void){

	int n, c, k;

	printf("Enter a decimal number: \n");
	scanf("%d", &n);

	printf("%d in the binary number system is: ", n);

	for(c=31; c>=0; c--){

		k = n >> c;
	 
		if(k & 1)
			printf("1");
		else
			printf("0");
	}

	printf("\n");

	return(0);
}
