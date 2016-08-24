#include <stdio.h>

int main(void)
{

	int Num;

	printf("Please enter a number to check colour code: \n");
	scanf("%d", &Num);

	switch(Num)
	{
		case 0:
			printf("Resistor colour code: Black\n");
			break;
		case 1:
			printf("Resistor colour code: Brown\n");
			break;
		case 2:
			printf("Resistor colour code: Red\n");
			break;
		case 3:
			printf("Resistor colour code: Orange\n");
			break;
		case 4:
			printf("Resistor colour code: Yellow\n");
			break;
		case 5:
			printf("Resistor colour code: Green\n");
			break;
		case 6:
			printf("Resistor colour code: Blue\n");
			break;
		case 7:
			printf("Resistor colour code: Violet\n");
			break;
		case 8:
			printf("Resistor colour code: Grey\n");
			break;
		case 9:
			printf("Resistor colour code: White\n");
			break;
		default:
			printf("Incorrect input - Number must be between 0-9 \n");
	}

	return(0);
}
