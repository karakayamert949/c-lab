#include <stdio.h>

int main(void)
{
	float fahrenheit;
	printf("Enter a fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	float kelvin = (fahrenheit - 32) / 1.8 + 273.15;
	
	printf("%f", kelvin);
}
