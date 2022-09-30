#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int alphabet(char);

int main()
{
    srand(time(0));
    char x=(rand() %128);
    char y=(rand() %128);
    char z=(rand() %128);
    printf("%c is alphabet or not: %i\n",x,alphabet(x));
    printf("%c is alphabet or not: %i\n",y,alphabet(y));
    printf("%c is alphabet or not: %i\n",z,alphabet(z));
}

int alphabet(char u)
{
    int a= (u<='z' && u>='a') || 'A'<=u && u<='Z';
    return a;
}