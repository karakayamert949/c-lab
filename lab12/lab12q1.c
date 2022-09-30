#include <stdio.h>
#include <math.h>

typedef struct complex{
        double real;
        double imaginary;
}complex;

complex conjugate(complex a);
complex sum(complex a,complex b);
complex multiplication(complex a,complex b);
float module(complex a);

int main()
{
    int choice;
    printf("Type a relevant number.\n (1=conjugate, 2=sum, 3=module, 4=multiplication)\n");
    scanf("%i",&choice);
    if (choice == 1)
    {
        complex num;
        printf("Enter a complex number and let me calculate its conjugate form\n");
        scanf("%lf %lfi",&num.real,&num.imaginary);
        complex result=conjugate(num);
        printf("%lf %lfi",result.real,result.imaginary);
    }
    if (choice == 2)
    {
        complex num,num1;
        printf("Enter the first complex number\n");
        scanf("%lf %lfi",&num.real,&num.imaginary);
        printf("Enter the second complex number and let me calculate their sum\n");
        scanf("%lf %lfi",&num1.real,&num1.imaginary);
        complex result=sum(num,num1);
        printf("%lf %lfi",result.real,result.imaginary);
    }
    if (choice == 3)
    {
        complex num;
        printf("Enter a complex number and let me calculate its modulus\n");
        scanf("%lf %lfi",&num.real,&num.imaginary);
        float result=module(num);
        printf("The module of the complex number is %f",result);
    }
    if (choice == 4)
    {
        complex num,num1;
        printf("Enter the first complex number\n");
        scanf("%lf %lfi",&num.real,&num.imaginary);
        printf("Enter the second complex number and let me calculate their multiplication\n");
        scanf("%lf %lfi",&num1.real,&num1.imaginary);
        complex result=multiplication(num,num1);
        printf("%lf %lfi",result.real,result.imaginary);
    }
}

complex conjugate(complex a)
{
    a.imaginary=-a.imaginary;
    return a;
}

complex sum(complex a,complex b)
{
    complex c;
    c.real=a.real+b.real;
    c.imaginary=a.imaginary+b.imaginary;
    return c;
}

float module(complex a)
{
   float b= sqrt(pow(a.real,2)+pow(a.imaginary,2));
   return b;
}

complex multiplication(complex a,complex b)
{
    complex c;
    double k=a.real*b.real;
    double t=a.imaginary*b.imaginary;
    double m= a.imaginary*b.real;
    double l= b.imaginary*a.real;
    c.real=k-t;
    c.imaginary=l+m;
    return c;
}