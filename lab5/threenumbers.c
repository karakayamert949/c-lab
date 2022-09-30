#include <stdio.h>

int largersum();

int main()
{
    int num1,num2,num3;
    printf("Enter the first number: ");
    scanf("%i", &num1);
    printf("Enter the second number: ");
    scanf("%i",&num2);
    printf("Enter the third number: ");
    scanf("%i", &num3);
    printf("%i",largersum(num1,num2,num3));
}

int largersum(int x,int y,int z)
{
    int a= x>y+z || y>x+z || z>y+x;
    return a;
}