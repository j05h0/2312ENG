#include<stdio.h>

int main(void)
{
float x = 0;
float y = 0;
float max = 2;

printf("Performs the calculation: y = x/(1+x^2)\n   x        y\n"); // Displays title

while (x <= max) // Performs calculation for y and increases x until max is reached (2.0)
{
	y = x / (1 + x*x);
	x = x + 0.1;
	printf("x=%4.3f  y=%4.3f \n",x, y);
}
return(0);
}
