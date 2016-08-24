#include<stdio.h>

int main(void)
{
	float cap1, cap2, total;

	printf("Enter value of Capacitor 1: \n");
	scanf("%f", &cap1);

	printf("Enter value of Capacitor 2: \n");
	scanf("%f", &cap2);

	total = (cap1 * cap2) / (cap1 + cap2);

	printf("The total capacitance of parallel combination is: %f\n", total);
	return(0);
}
