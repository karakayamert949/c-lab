#include <stdio.h>
#include <math.h>

void root(int x,int y, int z);

int main()
{
    int a,b,c;
    printf("Enter three coefficients: ");
    scanf("%i %i %i",&a,&b,&c);
    root(a,b,c);
}

void root(int x, int y, int z)
{
    float delta=y*y-4*x*z;
    float root1,root2,root3;

    switch(delta>0)
    {
    case 1:
        root1= (-y+sqrt(delta))/(2*x);
        root2= (-y-sqrt(delta))/(2*x);
        printf("First root is %f, second root is %f.",root1,root2);
        break;

    case 0:
        switch (delta==0)
        {
        case 1:
            root3= (-y/(2*x));
            printf("The root is %f.",root3);
            break;

        case 0:
        printf("There is no real roots.");
        break;
        } 
    break;
    }
}