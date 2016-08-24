#include<stdio.h>
#include<math.h>

int main(void)
{
	float C, f, Xc;
	
	printf("Please enter the capacitor's capacitance: \n");
	scanf("%f", &C);

	printf("Please enter the source frequency: \n");
	scanf("%f", &f);

	Xc = 1.0 / (2.0 * M_PI * f * C);
	
	printf("The resultant reactance (Xc) is: %.3e\n", Xc);
	
	return(0);
}
