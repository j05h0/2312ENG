#include<stdio.h>

int main(void)
{
	int Num, Result; // Decleration of variables

	printf("Please enter a number to check if divisible by 2: \n"); // Prints request of user to enter number
	scanf("%d", &Num); // Stores number pressed to variable Num

	Result = Num % 2;	

    if (Result==0)
		printf("Input was EVEN\n");
	else 
		printf("Input was ODD\n");

	return(0);
}
