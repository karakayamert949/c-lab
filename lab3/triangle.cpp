#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,alfa,beta,gama,sum;
	
	printf("Enter the first edge: "); 
	scanf("%f", &a);
	getchar();
	printf("Enter the second edge: ");
	scanf("%f",&b);
	getchar();
	printf("Enter the gama: ");
	scanf("%f", &gama);
	
	float radiang = gama * (M_PI / 180);
	
	c= sqrt(pow(a,2)+pow(b,2)-2*a*b*cosf(radiang));
	printf("The third edge is %f \n",c);
	
	alfa=asinf(a*sinf(radiang)/c)/(M_PI/180);
	beta=asinf(b*sinf(radiang)/c)/(M_PI/180);
	printf("Alfa: %f, Beta: %f \n", alfa,beta);
	
	sum=alfa+beta+gama;
	printf("Sum of angles: %f", sum);
	
}
