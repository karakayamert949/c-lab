#include <stdio.h>
#include <math.h>

int main()
{
	float a, kare, kok;
	
	printf("Karesi ve karekoku hesaplanacak bir sayi gir\n");
	scanf("%f",&a);
	printf("\n");
	kare=pow(a,2);
	kok=pow(a,0.5); /* or kok = sqrt(a); */
	printf("sayinin karesi: %0.2f, sayinin koku: %f", kare, kok);

}
