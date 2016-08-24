#include<stdio.h>

int main(void)
{ 
	float R1, R2, total;
	char type;
	
	printf("Please enter the value of resistor 1: \n");
	scanf("%f", &R1);

	printf("Please enter the value of resistor 2: \n");
	scanf("%f", &R2);

	printf("Please enter S if the circuit is in series or P if in parallel: \n");
	scanf(" %c", &type);

	if (type == 'S')
		total = R1 + R2;
	else
		total = (R1 * R2)/(R1 + R2);

	printf("The resulting resistance = %f\n", total);
	
	return(0);
}
