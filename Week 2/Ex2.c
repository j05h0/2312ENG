#include<stdio.h>

int main(void)
{
	float fahrenheit, celcius, kelvin;
	
	printf("Please enter the temperature required in Fahrenheit: \n");
	scanf("%f", &fahrenheit);

	celcius = 5.0/9.0 * (fahrenheit - 32);
	kelvin = celcius + 273.5;

	printf("The temperature in its respective units is: \nCelcius: %f \nKelvin: %f\nFahrenheit: %f \n", celcius, kelvin, fahrenheit);

	return(0);
}
