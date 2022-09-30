#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main()
{
	float radius, diameter, circumference, area;
	printf("Enter radius of a circle\n");
	scanf("%f", &radius);
	
	diameter=radius*2;
	circumference=2*pi*radius;
	area=pi*pow(radius,2);
	
	printf("Diameter: %f, Circumference: %f, Area: %f", diameter, circumference, area);
}
