#include <stdio.h>

int main ()
{
// surface area of a cylinder
	float diameter = 0.0;
	float height = 0.0;
	float SA = 0.0;
	const float pi = 3.14;
	float radius;
	
	printf("Diameter of the Cylinder = ");
	scanf("%f", &diameter);
	printf("Height of the cylinder = ");
	scanf("%f", &height);
	
	printf("\nDiameter is %.2f, and Height is %.2f\n", diameter, height);
	
	radius = diameter/2;
// SA = 2PIr^2 + 2PIrh
	SA = (2*pi*(radius*radius)) + (2*pi*radius*height);
	
	printf("The surface area of the cylinder is = %.4f\n", SA);
	
return 0;
}