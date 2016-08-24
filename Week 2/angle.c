#include<stdio.h>
#include<math.h>

int main(void)
{
	float angle, s, c, tangent, unity;

	printf("Enter an angle in radians: ");
	scanf("%f", &angle);
	
	s = sin(angle);
	c = cos(angle);
	tangent = s / c;

	unity = sqrt(s * s + c * c);

	printf("The answer are:\n%f\n%f\n%f\n%f\n", s, c, tangent, unity);

	return (0);
}
	
