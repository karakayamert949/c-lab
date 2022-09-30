#include <stdio.h>

int largersum(float,float,float);

int main()
{
    float num1,num2,num3;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f",&num2);
    printf("Enter the third number: ");
    scanf("%f", &num3);
    printf("%i",largersum(num1,num2,num3));
}

int largersum(float x,float y,float z)
{
    int a= x>y+z || y>x+z || z>y+x;
    return a;
}