#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int triangle(int x, int y, int z);

int main()
{
    srand (time(0));
    int lengthWire;
    printf("What is the length of the wire?\n");
    scanf("%d", &lengthWire);

    int condition1=lengthWire*4/5;
    int piece1 = rand() %condition1 + 1;
    printf("First piece is %i\n",piece1);

    int temppiece= lengthWire-piece1;
    int condition2= temppiece*4/5;
    int piece2= rand() %condition2 + 1;
    printf("Second piece is %i\n",piece2);


    int piece3= lengthWire-piece2-piece1;
    printf("Third piece is %i\n",piece3);

    int x= triangle(piece1,piece2,piece3);
    printf("Do these wires form a triangle ? %i",x);
}

int triangle(int x, int y, int z)
{
    int triangle2= x+y>z && x+z>y && y+z>x;
    return triangle2;
}