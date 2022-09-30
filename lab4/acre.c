#include <stdio.h>
#include <math.h>

float acres_to_hectares(float acres);

int main()
{
    float acre,hectare;
    printf("What is the acres value?\n");
    scanf("%f",&acre);
    hectare=acres_to_hectares(acre);
    printf("%f acres are equal to %f hectares",acre,hectare);
}

float acres_to_hectares (float acre)
{
    float square_yard=acre*4840;
    float inch=sqrt(square_yard)*36;
    float cm=inch*2.54;
    float m=cm*0.01;
    float hectare=pow(m,2)/10000;
    return hectare;
}